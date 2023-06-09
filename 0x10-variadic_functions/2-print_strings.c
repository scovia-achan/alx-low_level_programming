#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings
 * @separator: string to be printed
 * @n: number of strings passed to the function
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list Args;
	char *ptrArg;

	va_start(Args, n);

	for (i = 0; i < n; i++)
	{
		ptrArg = va_arg(Args, char *);
		if (ptrArg == NULL)
			printf("(nil)");
		if (separator != NULL && i > 0)
			printf("%s", separator);
		else
			printf("%s", ptrArg);
	}
	printf("\n");
	va_end(Args);
}
