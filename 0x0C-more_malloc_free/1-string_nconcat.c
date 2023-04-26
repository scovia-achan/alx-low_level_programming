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
	unsigned int i, len1, len2;

	len1 = 0;
	len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s2[len2] != '\0')
		len2++;
	while (s1[len1] != '\0')
		len1++;
	if (n >= len2)
		n = len2;

	ptr = malloc(sizeof(char) * n + len1 + 1);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		ptr[i] = s1[i];
	for (i = 0; i < n; i++)
		ptr[i + len1] = s2[i];

	ptr[i + len1] = '\0';
	return (ptr);
}
