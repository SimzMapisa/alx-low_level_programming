#include "main.h"

/**
 * _strpbrk - a function that searches a string for any of a set of bytes
 * @s: pointer
 * @accept: pointer string to cpm with
 *
 * Description: "a function that searches a string for any of a set of bytes"
 *
 * Return: as pointer
 *
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}

	return (s);
}
