#include "main.h"

/**
 * *_strcat -  concatenate two strings
 * @dest: destination parameter
 * @src: source parameter
 * Return: returns destination
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (int i = 0; dest[i] != '\0'; i++)

	for (j = 0; src[j] != '\0'; j++, i++)
	{
		dest[i] = src[j];

	dest[i] = '\0';
	return (dest);
}
