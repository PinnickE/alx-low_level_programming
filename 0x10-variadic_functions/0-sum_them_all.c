#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Return the sum of all parameters
 *
 * @n: Number of parameters
 *
 * Return: Sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;

	unsigned int cntr, sum = 0;

	va_start(args, n);

	if (n == 0)
	{
		return (0);
	}

	for (cntr = 0; cntr < n; cntr++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}
