#include <stdlib.h>
#include "dog.h"
#include <string.h>

/**
 * free_dog - free dog variable
 * @d: dog pointer
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
