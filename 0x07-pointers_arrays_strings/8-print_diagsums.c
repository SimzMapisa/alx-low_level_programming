#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: pointer to array
 * @size: length
 *
 * Description: "prints the sum of the two diagonals"
 *
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int j;
	int sumX = 0;
	int sumY = 0;

	for (j = 0; j < size; j++)
	{
		sumX += a[j * size + j];
	}

	for (j = 0; j < size; j++)
	{
		sumY += a[j * size + (size - 1 - j)];
	}

	printf("%d, %d", sumX, sumY);
	printf("\n");
}
