#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and
 * initializes it with a specific char
 * @size: size of the allocated space
 * @c: character to initialize it to
 *
 * Return: pointer to array, NULL if size = 0, NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *p;

	if (size != 0)
	{
		p = malloc(size * sizeof(c));
		if (p == NULL)
			return (NULL);
		else
		{
			do
			{
				p[size] = c;

			} while (--size);
			return (p);
		}
	}
	return (NULL);
}
