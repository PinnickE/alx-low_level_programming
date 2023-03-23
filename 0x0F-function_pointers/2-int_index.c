#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - Search for an integer
 *
 * @array: Array to search
 * @size: Size of the array
 * @cmp: Function to compare integers
 *
 * Return: -1 or index of integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}

	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]))
		{
			return (a);
		}
	}

	return (-1);
}
