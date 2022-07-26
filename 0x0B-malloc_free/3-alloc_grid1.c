#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocates memory for a
 * 2 dimensional array of integers
 * @width: width of array
 * @height: height of array
 *
 * Return: pointer to 2D array
 */
int **alloc_grid(int width, int height)
{
	int i, j, k;
	int **array;

	if (width > 0 && height > 0)
	{
		array = malloc(height * sizeof(int));
		if (array == NULL)
			return (NULL);
		for (i = 0; i < height; i++)
		{
			array[i] = malloc(width * sizeof(int));
			if (array[i] == NULL)
			{
				for (k = 0; k < i; k++)
				{
					free(array[k]);
				}
				free(array);
				return (NULL);
			}
		}
		for (i = 0; i < height; i++)
		{
			for (j = 0; j < width; j++)
			{
				array[i][j] = 0;
			}
		}
		return (array);
	}
	return (NULL);
}
