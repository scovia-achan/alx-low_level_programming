#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenate 2 strings
 * @s1: first string
 * @s2: second string
 * Return: concatenated string containing both s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, j, len_s1, len_s2;

	i = 0;
	j = 0;
	len_s1 = 0;
	len_s2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
	{
		i++;
		len_s1++;
	}

	i = 0;

	while (s2[i] != '\0')
	{
		i++;
		len_s2++;
	}
	int total_len = len_s1 + len_s2;

	concat = malloc(sizeof(char) * total_len + 1);
	if (concat == NULL)
		return (NULL);
	for (i = 0; i < len_s1; i++)
		concat[i] = s1[i];

	for (i = 0; i < len_s2; i++)
		concat[i + len_s1] = s2[i];
	concat[i + len_s1] = '\0';
	return (concat);
}
