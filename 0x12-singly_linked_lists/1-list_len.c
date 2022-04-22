#include <stdlib.h>
#include "lists.h"

/**
 * A function that returns the number of elements linked list_t list
 * @h: pointer to the list_t list
 *
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t n;
	n = 0;

	while (h !=NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
