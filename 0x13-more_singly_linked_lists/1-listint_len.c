#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - returns the number of elements
 * in a linked listint_t list
 * @h: list
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		/*printf("%d\n", h->n);*/
		h = h->next;
		i++;
	}
	return (i);
}
