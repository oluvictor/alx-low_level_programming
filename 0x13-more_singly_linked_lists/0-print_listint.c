#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;

	if (h != NULL)
	{
		while (h != NULL)
		{
			printf("%d\n", h->n);
			h = h->next;
			i++;
		}
	}
	return (i);
}
