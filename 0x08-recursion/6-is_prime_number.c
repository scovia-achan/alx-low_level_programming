#include "main.h"

/**
 * is_prime_number - prints 1 if integer is a prime number and 0 otherwise
 * @n: number to check
 * Return: either 0 or 1
 */

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	else
	{
		if (n % (n - 1) == 0)
			return (1);
		return (0);
	}

}
