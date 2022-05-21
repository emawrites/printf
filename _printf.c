#include "main.h"

/**
 * _printf - function that produces output
 * according to a format.
 * @format: character string
 *
 * Return: no of characters printed.
 */

int _printf(const char *format, ...)
{
	int (*pfunc)(va_list, sign_t *);
	const char *p;
	va_list arguments;
	sign_t sign = {0, 0, 0};

	register int count = 0;

	va_start(arguments, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	for (p = format; *p; p++)
	{
		if (*p == '%')
		{
			p++;
			if (*p == '%')
			{
				count += _putchar('%');
				continue;
			}
			while (get_sign(*p, &sign))
				p++;
			pfunc = get_print(*p);
			count += (pfunc)
				? pfunc(arguments, &sign)
				: _printf("%%%c", *p);
		} else
			count += _putchar(*p);
	}
	_putchar(-1);
	va_end(arguments);
	return (count);
}
