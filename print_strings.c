#include "main.h"

/**
 * print_string - a function used to print characters in a string
 * @ap: va_list of command line arguments from _printf
 * @f: pointer to the struct of flags
 * Return: number of char printed
 */
int print_string(va_list ap, sign_t *f)
{
	char *s = va_arg(ap, char *);

	(void)f;

	if (!s)
		s = "(null)";
	return (_puts(s));
}

/**
 * print_char - prints a character
 * @ap: va_list of command line arguments from _printf
 * @f: pointer to the struct of flags
 * Return: number of char printed
 */
int print_char(va_list ap, sign_t *f)
{
	(void)f;
	_putchar(va_arg(ap, int));
	return (1);
}
