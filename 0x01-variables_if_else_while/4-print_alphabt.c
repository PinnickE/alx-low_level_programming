#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int ch = 'a';

	while (ch <= 'z' && ch != 'e' && ch != 'q')
	{
		putchar(ch);
		ch++;
	}

	return (0);
}
