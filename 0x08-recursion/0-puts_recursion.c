#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: "pointer to the string"
 *
 * Description: "prints a string followed by a new line"
 *
 * Return: Nothing
 */

void _puts_recursion(char *s)
{
	int idx = 0;

	while (s[idx] != '\0')
	{
		_putchar(s[idx]);
		idx++;
	}
	_putchar('\0');
	_putchar('\n');
}
