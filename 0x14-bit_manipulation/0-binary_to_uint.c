#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: String containing the binary number.
 *
 * Return: The converted number.
 */

unsigned int binary_to_uint(const char *b)
{
	int idx;
	unsigned int decimal_value = 0;

	if (b == NULL)
		return (0);
	for (idx = 0; b[idx]; idx++)
	{
		if (b[idx] < '0' || b[idx] > '1')
			return (0);
		decimal_value = (decimal_value << 1) | (b[idx] - '0');
	}
	return (decimal_value);
}
