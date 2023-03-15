#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Create an array of characters
 * and initialize with a specific character
 *
 * @size: Size of Array
 * @c: Assigned character
 *
 * Return: Pointer to the array or NULL
 *
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int a;

	arr = malloc(sizeof(char) * size);

	if (size == 0 || arr == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < size; a++)
	{
		arr[a] = c;
	}

	return (arr);
}
