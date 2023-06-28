#include "main.h"

/**
 * _strncat - a func that concats two stings
 * @dest: destination
 * @src: src string
 * @n: bytes in src
 *
 * Description: "A function that concats two strings"
 *
 * Return: a string
 *
 */

char *_strncat(char *dest, char *src, int n)
{
	int length = 0;
	int idx;

	while (dest[length] != '\0')
	{
		length++;
	}

	for (idx = 0; idx < n && src[idx] != '\0'; idx++)
	{
		dest[length] = src[idx];
		length++;
	}

	dest[length] = '\0';

	return (dest);
}
