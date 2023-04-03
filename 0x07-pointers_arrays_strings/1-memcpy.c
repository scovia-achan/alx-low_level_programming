#include "main.h"

/**
 * *_memcpy - copy memory area
 * @dest: pointer to param 1
 * @src: pointer to second param
 * @n: number of bytes
 * Return: returns a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
