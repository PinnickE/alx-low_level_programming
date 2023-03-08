#include "main.h"

/**
 * _print_rev_recursion - Print a string in reverse
 *
 * @s: String to reverse
 *
 * Retun: 0
 *
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		s--;
		_print_rev_recursion(s--);
	}

}
