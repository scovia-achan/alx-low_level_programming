#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * check - checks if an input is a digit
 * @str: string to check
 * Return: True or false (boolean)
 */

int check(char *str)
{
	int count;

	for (count = 0; str[count] != '\0'; count++)
	{
		if (isdigit(str[count]))
		{
			return (1);
		}
	}
	return (0);
}

/**
 * main - adds positive numbers supplied as arguments
 * @argc: parameter count (parameter 1)
 * @argv: parameter 2
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	int sum, i;

	sum = 0;
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (!check(argv[i]))
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
		return (0);
	}
	else
	{
		printf("%d\n", 0);
		return (1);
	}
}
