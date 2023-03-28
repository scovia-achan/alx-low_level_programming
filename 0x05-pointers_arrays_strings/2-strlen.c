#include "main.h"
#include <string.h>

/**
 * _strlen - print length of a string
 * @s: parameter
 * Return: length of the string
 */

int _strlen(char *s)
{
	int length_of_string;

	length_of_string = strlen(*s);

	return (length_of_string);
}
