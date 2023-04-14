#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - allocates a 2D array of integers
 * @width: width of 2D array
 * @height: height of 2D array
 *
 * Return: pointer to newly allocated 2D array
 */

int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **array;

	if (width == 0 || height == 0)
		return (NULL);

	array = malloc(height * sizeof(int *));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		array[i] = malloc(width * sizeof(int));
		if (array[i] == NULL)
		{
			for (i = i - 1; i >= 0; i--)
				free(array[i]);

			free(array);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			array[i][j] = 0;
	}

	return (array);
}
