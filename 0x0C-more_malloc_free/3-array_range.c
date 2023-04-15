#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * @min: first integer number
 * @max: last integer number
 *
 * Return: integer value
 */
int *array_range(int min, int max)
{
	int *p, index = 0;

	if (min > max)
		return (NULL);

	p = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (p == NULL)
		return (NULL);

	while (min <= max)
	{
		p[index] = min;
		index++;
		min++;
	}

	return (p);
}
