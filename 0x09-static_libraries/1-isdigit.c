#include "main.h"

/**
 * _isdigit - Checking for digits
 * between (and including) 0 and 9
 *
 * @c: character to parse
 *
 * Return: 0 or 1
 */

int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
