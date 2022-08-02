#include <stdlib.h>
#include "dog.h"
#include <string.h>

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
	int i, name_l, owner_l;

	d = malloc(sizeof(dog_t));
	if (d == NULL || !(name) || !(owner))
	{
		free(d);
		return (NULL);
	}
	name_l = strlen(name);
	owner_l = strlen(owner);

	d->name = malloc(name_l);
	d->owner = malloc(owner_l);
	if (!(d->name) || !(d->owner))
	{
		free (d->name);
		free (d->owner);
		free(d);
		return (NULL);
	}

	for (i = 0; i < name_l; i++)
		d->name[i] = name[i];
	d->name[i] = '\0';

	for (i = 0; i < owner_l; i++)
		d->owner[i] = owner[i];
	d->owner[i] = '\0';
	d->age = age;
	
	return (d);
}
