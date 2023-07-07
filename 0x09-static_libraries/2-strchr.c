#include "main.h"
#include <string.h>

/**
 * _strchr - locates charater in a string
 * @s: pointer
 * @c: charater
 *
 * Description: locates a char in a string
 *
 * Return: character
 */

char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
