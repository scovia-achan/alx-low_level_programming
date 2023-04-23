#include <stdio.h>

/**
 * main - entry point of the program
 * Return: Always 0 (success)
 * @argc: argument count
 * @argv: second parameter
 */

int main(int argc, char **argv)
{
	int a, b, res;
	int (*ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	ptr = get_op_func(argv[2]);
	if (p == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	res = (*ptr)(a, b);

	printf("%d\n", res);
	return (0);
}
