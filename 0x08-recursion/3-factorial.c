#include "main.h"

/**
 * factorial - function that gives the factorial of a number
 * @n: integer whose factorial is to be found
 * Return: n!
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
