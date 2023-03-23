#include "main.h"

/**
 * print_most_numbers - print all numbers except 2 and 4
 *
 * return: 0
 */

void print_most_numbers(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		if (num != '2' && num != 4)
		{
			_putchar(num);
		}
	}
}
