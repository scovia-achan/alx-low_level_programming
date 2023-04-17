#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies 2 numbers
 * @argc: parameter count
 * @argv: parameter 2
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	int res, i;

	res = 1;
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			res *= atoi(argv[i]);
		}
		printf("%d\n", res);
		return (0);
	}
	else
	{
		printf("Error\n");
	}
	return (1);
}
