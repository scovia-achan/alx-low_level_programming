#include "main.h"
#include <string.h>

/**
 * print_rev - print a string in reverse
 * @s: parameter
 * return: returns 0
 */

void print_rev(char *s)
{
	int i;
	int str_len;
	int temp;
	int middle;

	str_len = strlen(s);
	middle = str_len / 2;

	for (i = 0; i < middle; i++)
	{
		temp = s[i];
		s[i] = s[str_len - i - 1];
		s[str_len - i - 1] = temp;
	}
	_putchar('\n');
}
