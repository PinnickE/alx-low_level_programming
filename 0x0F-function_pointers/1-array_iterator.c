#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - Execute a function on each element
 * of an array
 *
 * @array: Array pointer
 * @size: Size of the array
 * @action: Function to execute
 *
 * Return: Nothing
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int a;

	if (action == NULL || array == NULL)
	{
		return;
	}

	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}
