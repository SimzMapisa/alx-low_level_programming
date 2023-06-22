#include "main.h"

/**
 * print_square -  a function that prints a square
 * @size:  size of the square
 *
 * Description: " a function that prints a square"
 *
 * Return: square
 */

void print_square(int size)
{
	int k;
	int j;

	j = 0;
	k = 0;
	while (j < size)
	{
		while (k < size)
		{
			_putchar(35);
			k++;
		}
		j++;
	}
	_putchar('\n');
}
