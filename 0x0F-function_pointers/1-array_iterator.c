#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a
 * parameter on each element of an array.
 * @array: array of integers
 * @size: size of array
 * @action: function to pass items in array to
 *
 * Return: void
 */
void array_iterator(int *array, int size, void (*action)(int))
{
	int i;

	if (action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
			/*(*f)(name); this will achieve the same result*/
		}
	}
}
