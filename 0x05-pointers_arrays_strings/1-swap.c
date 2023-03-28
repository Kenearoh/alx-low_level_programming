#include "main.h"
/**
 *swap_int - swaps the values of two integers a, b
 *@a: integer 1
 *@b: integer 2
 *Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
