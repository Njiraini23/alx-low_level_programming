#include "list.h"
#include <stdlib.h>

/**
*add_nodeint -add a node at beginning of a list
*
*@head:  the header
*@n: the int to add
*
*Return: address of the new element or Null
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	if (head == NULL)
		return (NULL);
	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
