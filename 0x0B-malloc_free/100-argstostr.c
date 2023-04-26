#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments of the program
 * @ac: Counter of args
 * @av: vector of args
 *
 * Return: pointer to a new string or NULL
 */

char *argstostr(int ac, char **av)
{
	char *ptr;
	int i, j, k, n, m;
	int count = 0;

	k = 0;

	if (ac == 0)
		return (NULL);
	if (av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			count++;
		count++;
	}
	count++;
	ptr = malloc(sizeof(char) * count);
	if (ptr == NULL)
		return (NULL);

	for (n = 0; n < ac; n++)
	{
		for (m = 0; av[n][m] != '\0'; m++)
		{
			ptr[k] = av[n][m];
			k++;
		}
		ptr[k] = '\n';
		k++;
	}
	ptr[k] = '\0';
	return (ptr);
}
