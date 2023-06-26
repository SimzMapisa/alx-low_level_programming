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
	char rev = s[0];

	int counter = 0;

	int i;

	while (s[counter] != '\0')

		counter++;
	for (i = 0; i < counter; i++)
	{
		counter--;
		rev = s[i];
		s[i] = s[counter];
		s[counter] = rev;
	}
}
