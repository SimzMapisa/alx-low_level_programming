#include "main.h"
#include <string.h>

/**
 * _strspn - gets length of a prefix substring
 * @s: pointer
 * @accept: pointer
 *
 * Description: "gets length of a prefix substring"
 *
 * Return: 0 (success)
 */

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
