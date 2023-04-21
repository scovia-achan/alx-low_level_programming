#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_strings - prints strings
 * @separator: string to be printed
 * @n: number of strings passed to the function
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	int i;
	va_list Args;
	char *ptrArg;

	va_start(Args, n);i

	for (i = 0; i < n; i++)
	{
		ptrAgr = va_arg(Args, char *);
		if (separator == NULL)
			printf("(nil)\n");
		if (i > 0 && separator != NULL)
			printf("%s", separator);
		else
			printf("%s", ptrArg);
	}
	va_end(Args);
	printf("\n");
}
