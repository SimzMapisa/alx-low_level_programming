#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initializes a dog type of dog
 * @d: Initialized instance
 * @name: dog's name
 * @age: dog's age
 * @owner: owner
 *
 * Description: "Initializes a dog instance"
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
