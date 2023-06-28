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
	int idx;

	for (idx = 0; idx < n && src[idx] != '\0'; idx++)
	{
		dest[idx] = src[idx];
	}

	for (; idx < n; idx++)
	{
		dest[idx] = '\0';
	}

	return (dest);
}
