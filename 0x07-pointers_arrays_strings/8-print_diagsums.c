#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Print the sum of the two diagonals
 * of a square matrix of integers
 *
 * @a: Array
 * @size: Size of array
 *
 * Return: 0
 *
 */

void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int first;
	int second;
	int x;

	for (first = 0; first < size; first++)
	{
		x = (first * size) + first;
		sum1 += *(a + x);
	}

	for (second = 0; second < size; second++)
	{
		x = (second * size) + (size - 1 - second);
		sum2 += *(a + x);
	}

	printf("%d, %d\n", sum1, sum2);
}
