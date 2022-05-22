#include "main.h"

/**
 * get_sign - used to turn on the required flags
 * @s: this is the character specifying the required flag
 * @f: a pointer to the struct for storing the flags
 * Return: 1 for a flag that has been turned on, 0 otherwise
 */

int get_sign(char s, sign_t *f)
{
	int i = 0;

	switch (s)
	{
		case '+':
			f->plus = 1;
			i = 1;
			break;
		case ' ':
			f->space = 1;
			i = 1;
			break;
		case '#':
			f->hash = 1;
			i = 1;
			break;
	}
	return (i);
}
