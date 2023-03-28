#include "main.h"
#include <string.h>

/**
 * *_strcpy - copy a string from source to destination
 * @dest: where the string will be copied
 * @src: where the string is being copied from
 * return: dest
 */

char *_strcpy(char *dest, char *src)
{
	strcpy(src, dest);
	return (dest);
}
