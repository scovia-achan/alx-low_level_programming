#include "main.h"
#include <string.h>
/**
 * _puts_recursion - prints a character followed by a new line
 * @s: character to print
 * Return: characted followed by a new line
 */

void _puts_recursion(char *s)
{
	long int i;

	for (i = 0; i <= strlen(s); i++)
	{
		_putchar(*s);
	}
	_putchar('\n');
}
