#include "main.h"

/**
 * is_prime_number - Check if a number
 * is a prime number
 *
 * @n: Number to check
 *
 * @x: Possible primes t check
 *
 * Return: 1 or 0
 *
 */
int primer(int n, int x);

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (primer(n, 2));
	}
}

/**
 * primer - Check numbers
 *
 * @n: Number
 * @x: Prime
 *
 * Return: Result
 *
 */
int primer(int n, int x)
{
	if (n % x == 0)
	{
		if (x == n)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	else
	{
		return (primer(n, x + 1));
	}
}
