#include "main.h"

/**
 * reverse_array - prints the content of an array in reverse
 * @a: array parameter
 * @n: number of elements of the array
 * Return: the array in reverse
 */

void reverse_array(int *a, int n)
{
	int i;

	for (i = n - 1; i >= 0; i--)
	{
		_putchar(a[i]);
	}
}
