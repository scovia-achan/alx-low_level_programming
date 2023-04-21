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
	if (d != NULL)
	{
		printf("NAME: %s\n", (*d).name == NULL ? nil : (*d).name);
		printf("NAME: %d\n", (*d).age == NULL ? nil : (*d).age);
		printf("NAME: %s\n", (*d).owner == NULL ? nil : (*d).owner);
	}
}
