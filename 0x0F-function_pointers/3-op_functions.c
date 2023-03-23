#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - Returns the sum of a and b
 *
 * @a: First integer
 * @b: Second integer
 *
 * Return: Resulting integer
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Returns the difference between them
 * @a: First integer
 * @b: Second integer
 *
 * Return: Resulting integer
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Returns the product of both
 * @a: First integer
 * @b: Second integer
 *
 * Return: Resulting integer
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Returns result of divison
 * @a: First integer
 * @b: Second integer
 *
 * Return: Resulting integer
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Returns multiple of division
 * @a: First integer
 * @b: Second integer
 *
 * Return: Resulting integer
 */

int op_mod(int a, int b)
{
	return (a % b);
}
