#include "main.h"
#include <ctype.h>

/**
 * _isupper - checks whether a character is uppercase or lowercase
 * Return: it returns 0 or 1
 * @c: function parameter
 */

int _isupper(int c)
{
	int res;

	if (isupper(c))
	{
		res = _putchar('1');
	}
	else
	{
		res = _putchar('0');
	}
	return (res);
}
