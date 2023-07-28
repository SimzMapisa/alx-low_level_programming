#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include "stdio.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: size in bytes
 *
 * Return: a pointer to the memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
