#include <stdio.h>
#include "main.h"

/**
 * main - Entry point, a program that prints its name
 *
 * @argc: Number of command line arguments
 * @argv: Array
 *
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	puts(*argv);
	return (0);
}
