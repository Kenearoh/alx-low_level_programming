#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers
 * @a: array name
 * @n: number of elements of the array
 * Return: a and n input
 */
void print_array(int *a, int n)
{
	int i = 0;
	/* i = index of array */
	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		printf(" , ");
	}
	if (i != (n - 1))
	{
		printf(" , ");
	}
	printf("\n");
}

