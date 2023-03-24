#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - Print anything
 *
 * @format: Types of arguments passed
 *
 * Return: 0
 */

void print_all(const char * const format, ...)
{
	va_list all;
	int cntr = 0;

	va_start(all, format);

	if (format != NULL)
	{
		while (format[cntr])
		{
			switch (format[cntr])
			{
				case 'c':
					printf("%c, ", va_arg(all, int));
					break;

				case 'i':
					printf("%d, ", va_arg(all, int));
					break;

				case 'f':
					printf("%f, ", va_arg(all, double));
					break;

				case 's':
					printf("%s, ", va_arg(all, char *));
					break;
				default:
					cntr++;
					continue;
			}
			cntr++;
		}
	}

	printf("\n");
	va_end(all);
}
