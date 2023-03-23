#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - Print strings
 * followed by a new line
 *
 * @separator: String between strings
 * @n: Number of strings passed
 *
 * Return: 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;

	unsigned int cntr;
	char *s;

	va_start(strings, n);

	for (cntr = 0; cntr < n; cntr++)
	{
		s = va_arg(strings, char*);
		if (s == NULL)
		{
			printf("%s", "(nil)");
		}
		else
		{
			printf("%s", s);
		}

		if (cntr != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	printf("\n");
}
