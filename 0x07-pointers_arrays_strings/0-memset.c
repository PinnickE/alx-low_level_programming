#include "main.h"

/**
 * _memset - Fill memory with a constant byte
 *
 * @s: Memory area to fill
 * @b: Byte to populate memory
 * @n: Number of memory slots
 *
 * Return: Pointer to the memory area
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;
	int j = n;

	for (i = 0; i < j; i++)
	{
		s[i] = b;
	}

	return (s);
}
