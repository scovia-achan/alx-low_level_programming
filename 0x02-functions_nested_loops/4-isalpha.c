#include <stdio.h>
#include "main.h"

/**
 * _isalpha - check for alphabet letter is upper case or lowercase
 *
 * Return: Always 0 or 1
 * @c: function parameter
 */

int _isalpha(int c);
{
	if ((c >= 'a' && c <= 'z') && (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
