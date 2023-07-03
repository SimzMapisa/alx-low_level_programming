#include "main.h"

/**
 * _memset - fills memory with constant byte
 * @s: pointer
 * @b: byte to be used
 * @n: len
 *
 * Description: "a function that fills memory with a constant byte."
 *
 * Return: pointer s
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int idx;

	for (idx = 0; idx < n; idx++)
	{
		s[idx] = b;
	}

	return (s);
}
