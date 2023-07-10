#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * create_array -  creates an array of chars
 * @size: size nof array
 * @c: input charactor
 *
 * Description: " creates an array of chars"
 *
 * Return: pointer to array
 *
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *pArr;

	if (size == 0)
	{
		return (NULL);
	}

	pArr = malloc(sizeof(char) * size);

	if (pArr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		pArr[i] = c;
	}
	return (pArr);
}
