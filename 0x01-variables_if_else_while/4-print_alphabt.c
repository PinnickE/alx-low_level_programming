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

	do {
		if (ch == 'q' || or ch == 'e')
		{
			ch++;
			continue;
		}

		puthcar(ch);
		ch++
	} while (ch <= 'z');

	putchar('\n');

	return (0);
}
