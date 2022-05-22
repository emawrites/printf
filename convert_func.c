#include "main.h"

/**
 * convert - converts number and base into string
 * @num: input number
 * @base: input base
 * @case_flag: flag if hexa values need to be lowercase
 * Return: result string
 */

char *convert(unsigned long int num, int base, int case_flag)
{
	static char *char_str;
	static char buff[50];
	char *ptr;

	char_str = (case_flag)
		? "0123456789abcdef"
		: "0123456789ABCDEF";

	ptr = &buff[49];
	*ptr = '\0';

	do {
		*--ptr = char_str[num % base];
		num /= base;
	} while (num != 0);

	return (ptr);
}
