#include "main.h"

/**
 * flip_bits - Returns number of bits you would need to flip.
 * @n: First number.
 * @m: Second number.
 *
 * Return: Number of bits to change.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int idx;
	int count_dig = 0;
	unsigned long int current_bit;
	unsigned long int exclusive = n ^ m;

	for (idx = 63; idx >= 0; idx--)
	{
		current_bit = exclusive >> idx;

		if (current_bit & 1)
			count_dig++;
	}
	return (count_dig);
}
