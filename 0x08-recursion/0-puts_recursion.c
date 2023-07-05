#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line;
 * @s: pointer
 *
 * Description: "a function that prints a string"
 *
 * Return: a string
 *
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		s++;
	}
	_puts_recursion(s);
}
