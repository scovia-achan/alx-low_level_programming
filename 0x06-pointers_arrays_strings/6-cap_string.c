#include "main.h"

/**
 * *cap_string - Capitalize all words of a string
 * @s: string to be capitalized
 * Return: capitalized string
 */

char *cap_string(char *s)
{
	int i;

	char special[13] = {'\n', ' ', '\t', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'}

	for (i = 0; i < 13; i++)
	{
		if (special[i] == s)
		{
			return (1);
		}
	}
	return (0);
}
