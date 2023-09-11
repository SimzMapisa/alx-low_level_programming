#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog datastructure
 * @name: member 1
 * @age: member 2
 * @owner: last member
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
