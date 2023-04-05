#include "main.h"
#include <string.h>
/**
 * _puts_recursion - prints a character followed by a new line
 * @s: character to print
 * Return: characted followed by a new line
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
	_putchar('\n');
}
