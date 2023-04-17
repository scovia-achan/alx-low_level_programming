#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point of the program; the program prints its name
 * @argc: argument count (parameter 1)
 * @argv: parameter 2; contains arguments passed to the function
 * Return: Always 0
 */

int main(int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", argv[0]);
	return (0);
}
