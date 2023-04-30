#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: new dog or NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i, leng1, leng2;
	dog_t *dog1;
	char *a, *b;

	leng1 = 0;
	leng2 = 0;
	for (i = 0; name[i] != '\0'; i++)
		leng1++;
	for (i = 0; owner[i] != '\0'; i++)
		leng2++;
	dog1 = malloc(sizeof(dog_t));
	if (dog1 == NULL)
		return (NULL);
	a = malloc(sizeof(char) * (leng1 + 1));
	if (a == NULL)
	{
		free(dog1);
		return (NULL);
	}
	for (i = 0; i < leng1; i++)
		a[i] = name[i];
	a[i] = '\0';
	dog1->name = a;
	dog1->age = age;

	b = malloc(sizeof(char) * (leng2 + 1));
	if (b == NULL)
	{
		free(a);
		free(dog1);
		return (NULL);
	}
	for (i = 0; i < leng2; i++)
		b[i] = owner[i];
	b[i] = '\0';
	dog1->owner = b;
	return (dog1);
}
