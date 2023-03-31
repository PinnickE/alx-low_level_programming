#include <stdio.h>

void printFirst(void) __attribute__ ((constructor));

/**
 * printFirst - Execute before main function is executed
 */
void printFirst(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

