#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point of the program
 * prints the name of the file the program was compiled from
 * Return: always 0 (success)
 */
int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
