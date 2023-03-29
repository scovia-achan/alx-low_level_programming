#include "main.h"

/**
 * *_strcat -  concatenate two strings
 * @dest: destination parameter
 * @src: source parameter
 * Return: returns destination
 */

char *_strcat(char *dest, char *src)
{
	int length;

	length_dest = 0;
	while (dest[length_dest] != '\0')
	{
		++length_dest;
	}

	for (int i = 0; src[i] != '\0'; ++length_dest)
	{
		dest[length_dest] = src[i];
	}

	dest[length_dest] = '\0';
	return (dest);
}
