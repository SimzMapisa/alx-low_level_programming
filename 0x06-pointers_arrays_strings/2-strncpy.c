#include "main.h"

/**
 * _strncpy - a function that copies a string.
 * @dest: destination
 * @src: source
 * @n: count
 *
 * Description: "a function that copies a string."
 *
 * Return: copied string
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
	int length = 0;

	do {
		dest[length] = src[length];
		length++;
	} while (length < n && src[length] != '\0');

	if (n <= length)
	{
		return (dest);
	}
	else
	{
		dest[length] = '\0';
	}

	return (dest);
}
