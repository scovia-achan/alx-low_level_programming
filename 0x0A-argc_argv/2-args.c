#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the number of arguments passsed to it
 * @argc:first argument
 * @argv:second argument
 * Return: number of arguments
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%d\n", argv[i]);
	}
	return (0);
}
