#include "main.h"

/**
 * swap_int - Swap the values of two integers
 *
 * @a: First integer
 * @b: Second integer
 */

void swap_int(int *a, int *b)
{
	int c;
	int d;

	c = *a;
	d = *b;

	*a = d;
	*b = c;
}
