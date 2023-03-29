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
	int temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
