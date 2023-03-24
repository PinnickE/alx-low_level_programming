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
	char *s, *sp = "";

	va_start(all, format);
	if (format != NULL)
	{
		while (format[cntr])
		{
			switch (format[cntr])
			{
				case 'c':
					printf("%s%c", sp, va_arg(all, int));
					break;

				case 'i':
					printf("%s%d", sp, va_arg(all, int));
					break;

				case 'f':
					printf("%s%f", sp, va_arg(all, double));
					break;

				case 's':
					s = va_arg(all, char *);
					if (!s)
						s = "(nil)";
					printf("%s%s", sp, s);
					break;
				default:
					cntr++;
					continue;
			}
			sp = ", ";
			cntr++;
		}
	}

	printf("\n");
	va_end(all);
}
