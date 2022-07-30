#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc -  allocates memory for an array, using malloc
 * @nmemb: number of elements
 * @size: size of each array element
 *
 * Return: pointer to allocated memory or null if nmemb or size is 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *p = NULL;
	unsigned int length = 0;

	length = nmemb * size;
	if (length != 0)
	{
		p = malloc(length);
		if (p != NULL)
		{
			for (i = 0; i < length; i++)
			{
				*(p + i) = 0;
			}
			return (p);
		}
	}
	return (p);
}
