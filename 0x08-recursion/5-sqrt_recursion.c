#include "main.h"

/**
 * _sqrt_recursion - Return natural square root
 * of a number
 *
 * root - New function to check possible roots
 *
 * @x: Possible roots to check
 *
 * @n: Number to parse
 *
 * Return: Result
 *
 */

int root(int n, int x);

int _sqrt_recursion(int n)
{
	return (root(n, 1));
}

int root(int n, int x)
{
	if (x * x == n)
	{
		return (x);
	}
	else if (x * x > n)
	{
		return (-1);
	}
	else
	{
		return (root(n, (x + 1)));
	}
}
