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
	if (n < 0)
		_putchar('-');
		return (-);
	else if (n > 0)
		_putchar('+');
		return (1);
	else if (n == 0)
		_putchar('0');
		return (0);
}
