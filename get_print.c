#include "main.h"

/**
 * get_print - used to select the correct printing function
 * @s: the conversion specifier
 * Return: a pointer to the matching printing function
 */

int (*get_print(char s))(va_list, sign_t *)
{
	ps f_array[] = {
		{'i', p_int},
		{'s', p_string},
		{'c', p_char},
		{'d', p_int},
		{'u', p_unsigned},
		{'x', p_hex},
		{'X', p_hex_cap},
		{'b', p_bin},
		{'o', p_oct},
		{'R', p_rot13},
		{'r', p_rev},
		{'S', p_capS},
		{'p', p_address},
		{'%', p_percent}
		};

		int flags = 14;
		register int i;

		for (i = 0; i < flags; i++)
			if (f_array[i].c == s)
				return (f_array[i].f);
			return (NULL);
}
