#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9
 *
 * Return: always 0
 */

void print_numbers(void)
{
	int i = 0;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
