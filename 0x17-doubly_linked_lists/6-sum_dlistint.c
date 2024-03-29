#include "lists.h"
/**
 *sum_dlistint - returns the sum of alldata
 *@head: the head of the list
 *
 *Return: 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}

