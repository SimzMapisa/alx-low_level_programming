#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to 2d array
 * @width: num of cols
 * @height: num of rows
 *
 * Description: "returns a pointer to 2D array of ints"
 *
 * Return: pointer to 2D arr
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **ptr;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = (int **) malloc(sizeof(int *) * height);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(sizeof(int) * width);
		if (ptr[i] == NULL)
		{
			for (; i >= 0; i--)
				free(ptr[i]);
			free(ptr);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			ptr[i][j] = 0;
	}
	return (ptr);
}
