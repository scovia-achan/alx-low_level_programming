#include "main.h"

/**
 * *string_toupper - print string to uppercase
 * @s: string parameter
 * Return: string in uppercase
 */

char *string_toupper(char *s)
{
	int i;

	/*Check if character is uppercase by checking it's ASCII value*/
	for (i = 0; s[i]; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] -= 32;
		}
	}
}
