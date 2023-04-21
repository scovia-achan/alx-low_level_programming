#include "dog.h"
#include <stdio.h>
/**
 * init_dog - dog function
 * @d: dog struct initiation
 * @name: dog's name
 * @age: dog's age
 * @owner: dog owner
 * Return: dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/* check if the details arenot empty */

	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
