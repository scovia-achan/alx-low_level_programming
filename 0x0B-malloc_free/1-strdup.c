#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to newly allocated space in memory
 * @str: string input
 * Return: pointer to the new string (duplicate)
 */

char *_strdup(char *str)
{
	char *ptr;
	int i;
	int j = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[j] != '\0')
		j++;

	ptr = malloc(sizeof(char) * j + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < j; i++)
	{
		ptr[i] = str[i];
	}
	return (ptr);
}
