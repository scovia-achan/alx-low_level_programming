#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns pointer to a 2D array of integers
 * @width: width of array
 * @height: height of array
 *
 * Return: pointer to the array of integers
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int i, j, k;

	/* check if width and height are less than or eaqual to 0 */
	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = malloc(sizeof(int *) * height);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(sizeof(int) * width);
		if (ptr[i] == NULL)
		{
			while (i >= 0)
			{
				free(ptr[i]);
				i--;
			}
			free(ptr);
			return (NULL);
		}
	}
	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
			ptr[j][k] = 0;
	}
	return (ptr);
}
