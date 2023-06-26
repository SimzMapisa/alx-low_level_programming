#include "main.h"

/**
 * rev_string - a function that prints a string, in reverse
 * @s: int variable
 *
 * Description: "prints a string, in reverse, followed by a new line."
 *
 * Return: return (void)
 */

void rev_string(char *s)
{
	int len = 0;
	int i, j;

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len / 2; i++)
	{
		j = len - 1 - 1;

		char myvar = s[i];

		s[i] = s[j];
		s[j] = myvar;
	}
}
