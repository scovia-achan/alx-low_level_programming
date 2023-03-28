#include "main.h"
#include <string.h>

/**
 * *_strcpy - copy a string from source to destination
 * @dest: where the string will be copied
 * @src: where the string is being copied from
 * Return: returns dest
 */

char *_strcpy(char *dest, char *src)
{
	int length;
	int i;

	length = strlen(src);
	for (i = 0; i <= length; i++)
	{
		src[i] = dest[i];
	}
	return (dest);
}
