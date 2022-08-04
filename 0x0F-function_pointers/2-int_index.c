#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: array of integers
 * @size: size of array
 * @cmp: function that compares and returns 0 each
 * time comparison fails
 *
 * Return: index to first position of searched item
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, pos;

	if (cmp != NULL && size > 0 && array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			pos = (*cmp)(array[i]);
			if (pos != 0)
				return (i);
			/*cmp(array[i]); this will achieve the same result*/
		}
	}
	return (-1);
}
