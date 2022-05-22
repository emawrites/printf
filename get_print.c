#include "main.h"

/**
 * get_print - used to select the correct printing function
 * @s: the conversion specifier
 * Return: a pointer to the matching printing function
 */

int (*get_print(char s))(va_list, sign_t *)
{
	ps f_array[] = {
		{'i', print_int},
		{'s', print_string},
		{'c', print_char},
		{'d', print_int},
		{'u', print_unsigned},
		{'x', print_hex},
		{'X', print_hex_big},
		{'b', print_binary},
		{'o', print_octal},
		{'R', print_rot13},
		{'r', print_rev},
		{'S', print_bigS},
		{'p', print_address},
		{'%', print_percent}
		};

		int n_flags = 14;

		register int i;

		for (i = 0; i < n_flags; i++)
			if (f_array[i].c == s)
				return (f_array[i].f);
		return (NULL);
}
