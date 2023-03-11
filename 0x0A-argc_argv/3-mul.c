#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - Entry point, a program that multiplies two numbers
 *
 * @argc: Number of command line arguments
 * @argv: Array
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int multi = 0;
	int first, second;
	char message[] = "Error";

	if (argc != 3)
	{
		puts(message);
		return (1);
	}

	first = atoi(argv[1]);
	second = atoi(argv[2]);

	multi = first * second;
	printf("%d\n", multi);
	return (0);
}
