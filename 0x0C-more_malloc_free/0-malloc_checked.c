#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - Allocate memory using malloc
 *
 * @b: Size of memory
 *
 * Return: Pointer
 *
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(sizeof(int) * b);
	
	if (ptr == NULL)
	{
		return (98);
	}

	return (ptr);
}
