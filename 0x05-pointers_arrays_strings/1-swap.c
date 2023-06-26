#include "main.h"

/**
 * swap_int - swap function
 * @a: int pointer
 * @b: int pointer
 *
 * Description: "a function that swaps the values of two integers."
 *
 * Return: swapped values
 *
 */

void swap_int(int *a, int *b)
{
	int i = *a;
	int j = *b;

	*b = i;
	*a = j;
}
