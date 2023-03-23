#include "main.h"
#include <ctype.h>

/**
 * _isupper - checks whether a character is uppercase or lowercase
 * Return: it returns 0 or 1
 * @c: function parameter
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
