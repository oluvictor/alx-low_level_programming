#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creats a dog variable
 * @name: name of dog
 * @age: age of dog
 * @owner: string owner of dog
 *
 * Return: new dog (dog_t)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
		return d;
	}
	return (NULL);
}
