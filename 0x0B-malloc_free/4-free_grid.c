#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees 2D grid previously created with malloc
 * @grid: double pointer to the 2d array to be freed
 * @height: number of rows on the 2d array
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
		free(grid[index]);

	free(grid);
}
