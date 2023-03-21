#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 *_islower - checks for lower case characters
 *
 * Return: Always 0 or 1
 * @c: function parameter
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
