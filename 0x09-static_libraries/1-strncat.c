#include "main.h"
#include <string.h>

/**
 * _strncat - cocats n bytes to dest from src
 * @dest: destination
 * @src: source
 *
 * Description: "concats n bytes to dest from src"
 *
 * Return: 0 (success)
 */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
