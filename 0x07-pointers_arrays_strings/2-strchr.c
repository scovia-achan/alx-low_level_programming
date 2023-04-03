#include "main.h"

/**
 * *_strchr - look for character
 * @s: pointer to string
 * @c: character to be found
 * Return: returns c
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == '\0')
		{
			return (NULL);
		}
		else if (s[i] == c)
		{
			return (s + i);
		}
	}
}
