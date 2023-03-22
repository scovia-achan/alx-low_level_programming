#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - prints the last digit of a number
 *
 * @a: parameter to the function
 *
 * Return: Always remainder
 */

int print_last_digit(int a)
{
	int rem;

	rem = '0' + abs(a % 10);
	_putchar(rem);

	return (abs(a % 10);
}
