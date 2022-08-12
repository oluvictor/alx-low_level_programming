#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: a list
 *
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t size = 0;

	if (h != NULL)
	{
		while (1)
		{
			size++;
			if (h->next == NULL)
				break;
			h = h->next;
		}

	}
	return (size);
}
