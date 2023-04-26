#include "main.h"
#include <stdarg.h>
/**
 * string_nconcat - concatenate 2 strings
 * @s1: first string
 * @s2: second string
 * @n: bytes for s2
 * Return: allocated space or NULL if none
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int k = 0;
	unsigned int m, p, length;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	if (j > n)
		j = n;

	length = i + j;

	ptr = malloc(sizeof(char) * (length + 1));
	if (ptr == NULL)
		return (NULL);

	for (p = 0; p < i; p++)
		ptr[k++] = s1[p];
	for (m = 0; m < j; m++)
		ptr[k++] = s2[m];

	ptr[k] = '\0';
	return (ptr);
}
