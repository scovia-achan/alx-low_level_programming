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

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (c);
		}
		else
		{
			return (NULL);
		}
	}
}
