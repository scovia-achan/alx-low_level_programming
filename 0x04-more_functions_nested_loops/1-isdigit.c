#include "main.h"

/**
 * _isdigit - checks for a digit
 * Return: either 0 or 1
 * @c: parameter to be checked
 */

int _isdigit(int c)
{
	if ((c >= 0) && (c <= 9))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
