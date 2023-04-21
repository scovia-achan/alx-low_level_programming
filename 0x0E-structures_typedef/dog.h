#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct representing dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: dog owner's name
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
