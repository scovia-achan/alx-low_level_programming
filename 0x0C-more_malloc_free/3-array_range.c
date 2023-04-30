#include "main.h"
#include <stdio.h>

/**
 * array_range - creates an array of integers
 * @min: lowest value
 * @max: highest integer
 * Return: pointer to new array
 */

int *array_range(int min, int max)
{
	int i, len;
	int *p;

	if (min > max)
		return (NULL);
	len = 0;
	for (i = min; i <= max; i++)
		len++;

	p = malloc(sizeof(int) * len);
	if (p == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (min <= max)
	{
		p[i] = min;
		i++;
		min++;
	}
	return (p);
}
