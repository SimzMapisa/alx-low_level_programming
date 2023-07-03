#include "main.h"

/**
 * _strchr -  a function that locates a character in a string.
 * @s: pointer
 * @c: character
 *
 * Description: " a function that locates a character in a string."
 *
 * Return: return a pointer s
 *
 */

char *_strchr(char *s, char c)
{
	int idx;
	int len = 0;

	for (idx = 0; s[idx] >= '\0'; idx++)
	{
		if (s[idx] == c)
		{
			return (s + idx);
		}

	}

	return ('\0');
}
