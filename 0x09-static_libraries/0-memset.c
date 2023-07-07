#include "main.h"
#include <string.h>

/**
 * _memset - fill memory with constant byte
 * @s: pointer
 * @b: char
 * @n: num of bytes
 *
 * Description: "fill memory with constant bytes"
 *
 * Return: 0 (success)
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
