#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Print numbers
 * followed by a new line
 *
 * @separator: String between numbers
 * @n: Number of integers passed
 *
 * Return: 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;

	unsigned int cntr;

	va_start(args, n);

	for (cntr = 0; cntr < n; cntr++)
	{
		printf("%d", va_arg(args, int));

		if (cntr != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	printf("\n");
}
