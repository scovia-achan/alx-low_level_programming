#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - entry point
 *
 * Return: always 0
 */

void print_alphabet_x10(void)
{
	char letter;
	int num=0;

	while (num<10)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
