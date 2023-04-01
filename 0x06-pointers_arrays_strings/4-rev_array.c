#include "main.h"
/**
 * reverse_array - reverses an array of integers
 * @a: array to be reversed
 * @n: number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int i, temporary;

	n = n - 1;
	i = 0; /*counter*/

	while (i <= n)
	{
		tmp = a[i];
		a[i++] = a[n];
		a[n--] = temporary;
	}
}
