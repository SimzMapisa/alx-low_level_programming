#include "main.h"

/**
 * _strcmp - a function that compares two strings.
 * @s1: first string
 * @s2: second string
 *
 * Description: "a function that compares two strings."
 *
 * Return: 0 (success)
 *
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int res;

	if (s1[i] != s2[i])
	{
		res = (s1[i] - s2[i]);
		return (res);
	}

	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
		{
			return (0);
		}
		i++;
	}
	return (0);
}
