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
	int b;
	int c;

	for (c = 0; c < n; c++)
	{
		n--;
		b = a[c];
		a[c] = a[n];
		a[n] = b;
	}
}
