#include "main.h"
#include <stdlib.h>

/**
 * free_grid - malloc
 * @grid: input
 * @height: input
 * Return: Always 0 Success
 */

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
