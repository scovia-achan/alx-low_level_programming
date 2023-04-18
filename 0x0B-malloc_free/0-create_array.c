#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of characters
 * @size: size of the array
 * @c: the characters to add to array
 * Return: returns the array
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size <= 0)
	{
		return (NULL);
	}
	arr = malloc(size * sizeof(char));
	if (arr == 0)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
