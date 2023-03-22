#include <stdio.h>

/**
 * main - returns hexadecimal numbers
 *
 * Return: Always 0
 */

int main(void)
{
	int a;
	char b;

	for (a = 0; a < 10; a++)
	{
		putchar(a);
	}
	for (b = 'a'; b < 'g'; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
