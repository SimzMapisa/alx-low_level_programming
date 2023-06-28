#include "main.h"

/**
 * reverse_array - reverses array
 * @a: the array
 * @n: array length
 *
 * Description: "a function that reverses the content of an array of integers"
 *
 * Return: nothing
 *
 */

void reverse_array(int *a, int n)
{
	int i;
	int j = 0;
	int temp;

	for (i = 0; i < n / 2; i++)
	{
		j++;
		temp = a[j];
		a[j] = a[j - 1 - i];
		a[j - 1 - i] = temp;

	}
}
