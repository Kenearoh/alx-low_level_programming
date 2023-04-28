#include <stdio.h>
/**
 * __attribute__ - functions with the constructor attribute
 * automatically called before the main function
 */
void first(void) __attribute__ ((constructor));

/**
 * first - prints a sentence before the main
 * function is executed
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
