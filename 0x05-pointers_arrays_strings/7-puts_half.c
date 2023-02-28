#include "main.h"

/**
 * puts_half - Print half of a string
 *
 * @str: The string to print
 *
 */

void puts_half(char *str)
{
	int i = 0;
	int j;
	int count;

	while (str[i] != '\0')
	{
		i++;
		str++;
	}

	if (i % 2 == 1)
	{
		j = ((i - 1) / 2 + '0');
	}
	else
	{
		j = (i / 2) + '0';
	}

	for (count = j; count < i; count++)
	{
		_putchar(str[count]);
	}
}
