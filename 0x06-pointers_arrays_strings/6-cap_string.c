#include "main.h"

/**
 * *cap_string - Capitalize all words of a string
 * @s: string to be capitalized
 * Return: capitalized string
 */

char *cap_string(char *s)
{
	int i;
	char *ptr = s;

	char nun[] = " \t\n,.!?\"(){}";
	int cap = 1;

	while (*s)
	{
		if (cap && *s >= 'a' && *s <= 'z')
			*s -= 32;
		cap = 0;
		for (i = 0; i < 12; i++)
		{
			if (*s == nun[i])
				cap = 1;
		}
		s++;
	}
	return (ptr);
}
