#include "main.h"

/**
 * is_prime_number - Check if a number
 * is a prime number
 *
 * @n: Number to check
 *
 * Return 1 or 0
 *
 */

int is_prime_number(int n)
{
	int x;

	if (n <= 0)
	{
		return (0);
	}
	else if (n == 1)
	{
		return (1);
	}	
	else
	{
		return (n % (is_prime_number(n - 1));
	}
}
