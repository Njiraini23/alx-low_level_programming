#include "lists.h"
/**
 *free_dlistint -the lists to be freed
 *@head: the head of the node
 *
 *Return: Null
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
