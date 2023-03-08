#include "main.h"

/**
 * factorial - Return the factorial of a given number
 *
 * @n: The given number
 *
 * Return: Factorial
 *
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (1);
	}
	else
	{
		n = n * factorial(n - 1);
	}

	return (n);
}
