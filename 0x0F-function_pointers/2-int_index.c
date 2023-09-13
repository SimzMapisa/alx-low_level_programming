#include <stdlib.h>

/**
 * int_index - search func
 * @array: array of elems
 * @size: size of array
 * @cmp: function that compares
 *
 * Description: "a function that searches for an int"
 *
 * Return: An Int on success
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		exit(1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 0)
		{
			continue;
		}
		return (i);
	}
	return (-1);
}
