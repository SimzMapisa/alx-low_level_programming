#include <stdlib.h>

/**
 * array_iterator - iterates
 * @array: array of elems
 * @size: size of array
 * @action: function that receives elem of arr
 *
 * Description: "iterates arr and pass elem to action"
 *
 * Retutn: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL || size == 0)
		exit(1);
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
