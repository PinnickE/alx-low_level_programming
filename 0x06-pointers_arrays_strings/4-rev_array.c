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
	int *b = a;
	int c;
	int d = 0;
	int e;

	for (c = n - 1; c > -1; c--)
	{
		b[d] = a[c];

		d++;
	}

	for (e = 0; e < n; e++)
	{
		a[e] = b[e];
	}
}
