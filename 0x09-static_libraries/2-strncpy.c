#include "main.h"
#include <string.h>

/**
 * _strncpy - copy a string
 * @dest: destination
 * @src: source
 * @n: n bytes
 *
 * Description: "copies a string"
 *
 * Return: dest string
 */

char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
