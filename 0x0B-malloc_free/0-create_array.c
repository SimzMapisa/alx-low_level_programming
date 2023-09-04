#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * create_array - creates array of chars
 * @size: size of the array
 * @c: character
 *
 * Description: "Prints an array of chars"
 *
 * Return: Always return char on success
 */

char *create_array(unsigned int size, char c)
{
	char *ptrChar;
	unsigned int i;

	if(size == 0)
		return (NULL);
	ptrChar = (char *) malloc(sizeof(char) * size);
	if (!ptrChar)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		ptrChar[i] = c;
	}
	return ptrChar;
}
