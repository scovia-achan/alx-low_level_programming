#include "variadic_functions.h"

/**
 * sum_them_all - sum all the arguments to the function
 * @n: first param
 * Return: sum of arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	int total;
	unsigned int i;

	/* pointer to the argument list */
	va_list pointer;
	/* initialize argument to list pointer */
	va_start(pointer, n);

	total = 0;

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		total += va_arg(pointer, int);

	va_end(pointer);

	return (total);
}
