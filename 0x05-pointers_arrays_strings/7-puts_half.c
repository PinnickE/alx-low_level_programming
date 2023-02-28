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
	}

	if (i % 2 == 1)
	{
		j = i / 2;
	}
	else
	{
		j = (i / 2);
	}

	for (count = j; count < i; count++)
	{
		_putchar(str[count]);
	}

	_putchar('\n');
}
