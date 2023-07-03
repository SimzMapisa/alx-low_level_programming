#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: pointer
 * @accept: compare to
 *
 * Description: "a function that gets the length of a prefix substring."
 *
 * Return: len
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;
	unsigned int len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				len++;
				break;
			}
		}

		if (accept[j] == '\0')
		{
			return (len);
		}
	}

	return (len);
}
