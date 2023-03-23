#include "3-calc.h"
#include <stdio.h>

/**
 *
 * op_add - Returns the sum of a and b
 * op_sub - Returns the difference between them
 * op_mul - Returns the product of both
 * op_div - Returns result of divison
 * op_mod - Returns multiple of division
 *
 * @a: First integer
 * @b: Second integer
 *
 * Returns: Resulting integer
 */

int op_add(int a, int b)
{
	return (a + b);
}

int op_sub(int a, int b)
{
	return (a - b);
}

int op_mul(int a, int b)
{
	return (a * b);
}

int op_div(int a, int b)
{
	return (a / b);
}

int op_mod(int a, int b)
{
	return (a % b);
}
