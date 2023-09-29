#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 *
 * @n: Number to search.
 *
 * @index: Inex of the bit
 *
 * Return: Value of the bit.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);
	bit_val = (n >> index) & 1;

	return (bit_val);
}
