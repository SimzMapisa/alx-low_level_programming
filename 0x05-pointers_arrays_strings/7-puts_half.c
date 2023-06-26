#include "main.h"

/**
 * puts_half - prints half of the string
 * @str: a string
 *
 * Description: "a function that prints half of a string"
 *
 * Return: a string
 *
 */

void puts_half(char *str)
{
	long int i;

	long int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		for (i = len / 2; i <= len - 1; i++)
		{
			_putchar(str[i]);
		}
	}

	_putchar('\n');
}
