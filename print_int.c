#include "main.h"

/**
 * print_int - a function used to print integer inputs
 * @ap: list of command line arguments given to _printf
 * @f: pointer to the struct of flags
 * Return: the number of characters printed
 */

int print_int(va_list ap, sign_t *f)
{
	int n = va_arg(ap, int);
	int int_dgts = count_digit(n);

	if (f->space == 1 && f->plus == 0 && n >= 0)
		int_dgts += _putchar(' ');

	if (f->plus == 1 && n >= 0)
		int_dgts += _putchar('+');

	if (n <= 0)
		int_dgts++;

	print_number(n);

	return (int_dgts);
}

/**
 * print_unsigned - a function used to unsigned integer inputs
 * @ap: list of command line arguments given to _printf
 * @f: pointer to the struct of flags
 * Return: the number of characters printed
 */
int print_unsigned(va_list ap, sign_t *f)
{
	unsigned int u = va_arg(ap, unsigned int);
	char *str = convert(u, 10, 0);

	(void)f;

	return (_puts(str));
}

/**
 * print_number - a function used to print the digits of an integer
 * @n: integer to be printed
 */
void print_number(int n)
{
	unsigned int n_cpy;

	if (n < 0)
	{
		_putchar('-');
		n_cpy = -n;
	}
	else
		n_cpy = n;

	if (n_cpy / 10)
		print_number(n_cpy / 10);

	_putchar((n_cpy % 10) + '0');
}

/**
 * count_digit - a function used to count the number of digits in an integer
 * @i: the integer input
 * Return: number of digits
 */
int count_digit(int i)
{
	unsigned int d = 0;
	unsigned int u;

	if (i < 0)
		u = i * -1;
	else
		u = i;

	while (u != 0)
	{
		u /= 10;
		d++;
	}

	return (d);
}
