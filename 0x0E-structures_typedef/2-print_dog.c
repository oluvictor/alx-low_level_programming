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
	if (d == NULL)
		exit(1);
	d = malloc(sizeof(struct dog));
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
