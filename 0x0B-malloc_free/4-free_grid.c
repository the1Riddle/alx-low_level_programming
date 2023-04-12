#include "main.h"
/**
 * free_grid - the entry point
 * @grid: 2diamention grid
 * @height: height dimension of grid
 *
 * Description: a function that frees a 2 dimensional grid previously
 * created by the alloc_grid function.
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}
