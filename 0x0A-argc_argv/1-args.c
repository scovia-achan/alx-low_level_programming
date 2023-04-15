#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the number of arguments passsed to it
 * @argc:first argument
 * @argv:second argument
 * Return: number of arguments
 */

int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
