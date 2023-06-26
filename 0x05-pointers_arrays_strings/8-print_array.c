#include "main.h"
#include <stdio.h>

/**
 * print_array - prints arr elems
 * @a: array of ints
 * @n: len of array
 *
 * Description: "a function that prints n elements of an array of integers"
 *
 * Return: ints
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i == n - 1)
		{
			break;
		}
		else
		{
			printf(", ");
		}
	}
	printf("\n");
}
