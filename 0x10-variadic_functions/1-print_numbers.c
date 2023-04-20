#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_numbers - print all numbers followed by a line
 * @separator: string to be printed between the numbers
 * @n: number of integers passed to the function
 * Return: numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list(ptr);

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		if (i > 0 && separator != NULL)
			printf("%s", separator);
		printf("%d", va_arg(ptr, int));
	}
	va_end(ptr);
	printf("\n");
}
