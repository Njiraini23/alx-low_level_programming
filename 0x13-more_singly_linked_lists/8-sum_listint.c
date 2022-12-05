#include "lists.h"

/**
*sum_listint -sum of all the data
*@head: points to first node
*
*Return: sum all data
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->;
		head = head->next;
	}
	return (sum);
}
