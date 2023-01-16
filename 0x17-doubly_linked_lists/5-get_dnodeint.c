#include "lists.h"

/**
 *get_dnodeint_at_index - gets the node position
 *@head: the head of the dlistint_t list
 * @index: the position of node
 *
 *Return: the position of the node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}

