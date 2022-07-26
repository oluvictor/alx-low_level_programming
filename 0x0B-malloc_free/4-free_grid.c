#include <stdlib.h>
/**
 * free_grid - free a pointer to a 2 dimensional array of integers
 * @grid: 2D array to free
 * @height:  column
 *
 * Return: int
 */
void free_grid(int **grid, int height)
{
	int f;

	for (f = 0; f < height; f++)
	{
		free(grid[f]);
	}
	free(grid);
}
