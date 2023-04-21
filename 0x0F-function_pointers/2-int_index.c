#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - searches for an integer
 * @array: array to search
 * @size: number of elements in the array
 * @cmp: pointer to the function used to compare variables
 * Return: index of the first element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int (*ptr)(int);

	ptr = cmp;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (ptr(arry[i]) && array[i] != 0)
			break;
		if (i == size - 1)
			return (-1);
	}
	return (i);
}
