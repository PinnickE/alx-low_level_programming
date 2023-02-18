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
		putchar(ch);

		ch++;

	} while (ch <= 'z' && ch != 'q' && ch != 'e');

	putchar('\n');

	return (0);
}
