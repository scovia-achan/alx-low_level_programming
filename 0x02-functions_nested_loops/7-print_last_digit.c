#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @a: parameter to the function
 *
 * Return: Always remainder
 */

int print_last_digit(int a)
{
	int remainder;

	remainder = a & 10;

	return (remainder);
}
