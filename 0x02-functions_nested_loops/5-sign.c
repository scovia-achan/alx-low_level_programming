#include <stdio.h>
#include "main.h"

/**
 * print_sign - prints sign of a number
 *
 * Return: returns sign
 * @n: function parameter
 */

int print_sign(int n)
{
	int result;

	if (n < 0)
	{
		_putchar('-');
		result = -1;
	}
	else if (n > 0)
	{
		_putchar('+');
		result = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		result = 0;
	}
	return (result);
}
