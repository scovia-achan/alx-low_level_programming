#include "function_pointers.h"

/**
 * array_iterator - executes a function as a parameter on each element
 * @array: the array to iterate over
 * @size: size of array
 * @action: function pointer
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
