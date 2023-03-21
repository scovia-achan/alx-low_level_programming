#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 * Return: always 0
 */

int main(void)
{
	int alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		_putchar(alph);
	}
	_putchar('\n');

	return (0);
}
