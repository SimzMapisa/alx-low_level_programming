#include "main.h"

/**
 * _memcpy - a function that copies memory area.
 * @dest: destination
 * @src: source
 * @n: num of bytes
 *
 * Description: "a function that copies memory area."
 *
 * Return: dest
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int idx;

	for (idx = 0; idx < n; idx++)
	{
		dest[idx] = src[idx];
	}

	return (dest);
}
