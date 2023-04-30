#include "dog.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * free_dog - free dog
 * @d: dog to free
 * Return: Void
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
