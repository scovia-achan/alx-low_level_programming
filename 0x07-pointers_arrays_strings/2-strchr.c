#include "main.h"

/**
 * *_strchr - look for character
 * @s: string
 * @c: character to be found
 * Return: returns c or null if c is not found
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}
