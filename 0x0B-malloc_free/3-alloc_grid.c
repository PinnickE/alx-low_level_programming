#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Make a two-dimensional array
 * of integers
 *
 * @width: Matrix width
 * @height: Matrix height
 *
 * Return: Pointer
 *
 */

int **alloc_grid(int width, int height)
{
	int **ptr;
	int a, b;

	if (width == 0 || height == 0)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(int *) * height);

	for (a = 0; a < height; a++)
	{
		ptr[a] = malloc(sizeof(int) * width);
		free(ptr[a]);
	}

	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
		{
			ptr[a][b] = 0;
		}
	}

	free(ptr);

	return (ptr);
}
