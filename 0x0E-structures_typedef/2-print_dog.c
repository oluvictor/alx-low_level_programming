#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints the structure dog
 * @d: pointer to dog
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	char *name;
	char *owner;

	if (d != NULL)
	{
		name = d->name == NULL ? "(nil)" : d->name;
		owner =	d->owner == NULL ? "(nil)" : d->owner;
		printf("Name: %s\n", name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", owner);
	}
}
