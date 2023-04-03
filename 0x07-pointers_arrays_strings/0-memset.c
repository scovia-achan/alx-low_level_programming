#include "main.h"

/**
 * _memset - fills memory with constant character
 * @s:pointer area to the value to be replaced
 * @b: character to be used to replace
 * @n: last parameter
 * Return: returns pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
