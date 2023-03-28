#include "main.h"

/**
 * _puts - print a string followed buy a new line
 * @str: parameter
 * return: always zero
 */

void _puts(char *str)
{
	int i;

	i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
