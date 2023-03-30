#include "main.h"

/**
 * *_strcat -  concatenate two strings
 * @dest: destination parameter
 * @src: source parameter
 * Return: returns destination
 */

char *_strcat(char *dest, char *src)
{
	char *x = dest;

	while (*dest++)
		;
	dest--;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (x);
}
