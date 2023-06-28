#include "main.h"

/**
 * _strcat - function that concats 2 strings
 * @dest: destination
 * @src: source
 *
 * Description: "a function that concatnates two strings"
 *
 * Return: a string
 *
 */

char *_strcat(char *dest, char *src)
{
	int length = 0;
	int i;

	while (dest[length] != '\0')
	{
		length++;
	}

	for (i = 0; i != '\0'; i++)
	{
		length++;
		dest[length] = src[i];
	}

	return (dest);
}
