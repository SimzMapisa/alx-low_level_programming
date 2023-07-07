#include "main.h"
#include <string.h>

/**
 * _strpbrk - searches the string for any set of bytes
 * @s: pointer to string
 * @accept: set of characters
 *
 * Description: "searches the string for any set of bytes"
 *
 * Return: char
 */

char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
