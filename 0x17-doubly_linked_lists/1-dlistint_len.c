#include "lists.h"

/**
 *dlistint_len -prints the number of elements in a list
 *@h: header of the list
 *
 * Return: number of list elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
