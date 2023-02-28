#include "main.h"
#include <stdio.h>

/**
 * print_array - Print n elements of an array
 *
 * @a: Array
 * @n: Number of array elements to print
 *
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		printf("%d, ", a[i]);

		if (i = -1)
		{
			printf(", ");
		}
	}

	printf("\n");
}
