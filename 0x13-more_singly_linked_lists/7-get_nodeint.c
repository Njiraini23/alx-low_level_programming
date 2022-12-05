#include "lists.h"

/**
*get_nodeint_at_index - the nth node of a listint_t
*@head: the head
*@index: pointer to first node
*Return: NULL if it does not exist
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	for (i = 0; i < index->next; i++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
