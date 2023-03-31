#include<stdio.h>

/**
 * printFirst - Use constructor attribute to delay execution of main
 */
void prntFirst(void) __attribute__ ((constructor));

/**
 * printFirst - Run function
 */
void printFirst(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
