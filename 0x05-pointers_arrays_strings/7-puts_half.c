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
	int j;
	int n;
	int l;

        l = 0;

        for (j = 0; str[j] != '\0'; j++)
	{
		j++;
	}

        n = (j / 2);

        if ((l % 2) == 1)
	{	
		n = ((l + 1) / 2);
	}

	for (j = n; str[j] != '\0'; j++)
	{
		_putchar(str[j]);
	}

	_putchar('\n');
}
