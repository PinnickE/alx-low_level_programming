#include "main.h"

/**
 * _sqrt_recursion - Return natural square root
 * of a number
 *
 * @n: Number to parse
 *
 * Return: Result
 *
 */

int _sqrt_recursion(int n)
{
	if (n == (n - 1 * n - 1))
	{
		return (n - 1);
	}
	else
	{
		return (_sqrt_recursion(n - 1));
	}
}
