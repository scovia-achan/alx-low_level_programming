#include "main.h"
#include <string.h>

/**
 * *_strncat - concatenate two string
 * @dest: first parameter
 * @src: second parameter
 * @n: byte size
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	size_t dest_len = strlen(dest);
	size_t i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
	return (dest);
}
