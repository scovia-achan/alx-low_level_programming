#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */

int main(void)
{
	int n;

	if (n == 0)
	{
		printf("%d is zero", &n);
	}
	else if (n < 0)
	{
		printf("%d is negative", &n);
	}
	else if (n > 0)
	{
		printf("%d is positive", &n);
	}

	return (0);
}
