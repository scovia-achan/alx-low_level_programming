#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints details of the dog
 * @d: pointer to the dog struct
 * Return: nothing
 */

void print_dog(struct dog *d)
{
	char *empty = "(nil)";

	if (d != NULL)
	{
		printf("Name: %s\n", (*d).name == NULL ? empty : (*d).name);
		printf("Age: %.2f\n", (*d).age == NULL ? empty : (*d).age);
		printf("Owner: %s\n", (*d).owner == NULL ? empty : (*d).owner);
	}
}
