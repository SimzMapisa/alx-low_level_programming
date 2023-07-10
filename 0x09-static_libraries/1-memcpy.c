#include "main.h"
#include <string.h>

/**
 * _memcpy - copy memory area
 * @dest: destination
 * @src: source
 * @n: number of bytes
 *
 * Description: "copy memory area"
 *
 * Return: Char
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
