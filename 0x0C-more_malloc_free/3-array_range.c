#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers that
 * contain values from min to max
 * @min: smallest integer in array
 * @max: largest integer in array
 *
 * Return: pointer to newly created array
 */
int *array_range(int min, int max)
{
	int i;
	int *p = NULL;
	int difference;

	difference = max - min + 1;
	if (max >= min)
	{
		p = malloc(difference * sizeof(int));
		if (p != NULL)
		{
			for (i = 0; i < difference; i++, min++)
			{
				*(p + i) = min;
			}
			return (p);
		}
	}
	return (p);
}
