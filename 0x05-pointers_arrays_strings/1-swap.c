#include "main.h"

/**
 * swap_int - function that swaps two integers
 * @a: first parameter
 * @b: second parameter
 * Return: retuns 0
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = a;
	a = b;
	b = temp;
}
