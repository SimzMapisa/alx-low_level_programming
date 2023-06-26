#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse
 * @s: int variable
 *
 * Description: "prints a string, in reverse, followed by a new line."
 *
 * Return: return (void)
 */

void print_rev(char *s)
{
	int i;
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = len; i > 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
