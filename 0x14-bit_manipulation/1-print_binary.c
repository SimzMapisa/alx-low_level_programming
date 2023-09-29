#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: Number to print in binary.
 */
void print_binary(unsigned long int n)
{
	int idx, count_dig = 0;
	unsigned long int current_bit;

	for (idx = 63; idx >= 0; idx--)
	{
		current_bit = n >> idx;

		if (current_bit & 1)
		{
			_putchar('1');
			count_dig++;
		}
		else if (count_dig)
		{
			_putchar('0');
		}
	}
	if (!count_dig)
	{
		_putchar('0');
	}
}
