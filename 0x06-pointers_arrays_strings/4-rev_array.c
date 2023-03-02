#include "main.h"

/**
 * reverse_array - Reverse the content
 * of an array of integers
 *
 * @a: Array
 * @n: Number of integers in array
 *
 */

void reverse_array(int *a, int n)
{
	int c;
	int d = 0;

	for (c = n - 1; c > -1; c--)
	{
		a[d] = a[c];
		d++;
	}
}
