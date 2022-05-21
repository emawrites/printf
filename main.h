#ifndef _MAIN_H
#define _MAIN_H

/** Adding the necessary head */

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct sign - struct indicating which sign to switch
 * when a specifier is passed to the _printf function
 * @plus: sign for the (+) character
 * @space: ' ' character sign.
 * @hash: sign for (#) character
 */

typedef struct sign
{
	int plus;
	int space;
	int hash;
} sign_t;

/**
 * struct printSign - struct indicating which sign to switch
 * when a specifier is passed to the _printf function
 * @c: specifies format.
 * @f: pointer to print function.
 */

typedef struct printSign
{
	char c;
	int (*f)(va_list args, sign_t *f);
} ps;

	int _printf(const char *format, ...);
	int print_int(va_list l, sign_t *f);
	void print_number(int n);
	int print_unsigned(va_list l, sign_t *f);
	int count_digit(int i);
	int print_hex(va_list l, sign_t *f);
	int print_hex_big(va_list l, sign_t *f);
	int print_binary(va_list l, sign_t *f);
	int print_octal(va_list l, sign_t *f);
	char *convert(unsigned long int num, int base, int lowercase);
	int _putchar(char c);
	int _puts(char *str);
	int print_rot13(va_list l, sign_t *f);
	int print_rev(va_list l, sign_t *f);
	int print_bigS(va_list l, sign_t *f);
	int print_address(va_list l, sign_t *f);
	int print_percent(va_list l, sign_t *f);
	int _printf(const char *format, ...);
	int (*get_print(char s))(va_list, sign_t *);
	int get_sign(char s, sign_t *f);
	int print_string(va_list l, sign_t *f);
	int print_char(va_list l, sign_t *f);
#endif
