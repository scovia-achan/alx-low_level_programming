#include "main.h"

/**
 * *_strcat -  concatenate two strings
 * @deest: destination parameter
 * @src: source parameter
 * Return: returns destination
 */

char *_strcat(char *dest, char *src)
{
	int length;

	length_src = 0;
	while (src[length_src] != '\0')
	{
		++length_src;
	}

	for (int i = 0; dest[i] != '\0'; ++length_dest)
	{
		src[length_dest] = dest[i];
	}

	src[length_dest] = '\0';
	return (dest);
}
