#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
*_strlen -returns the length of a string
*@s: the character
*Return: 1
*/
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*
*add_node - add a new node at the begining of a list_t list
*@head: the head of a list
*@str: the value to be inserted in the element
*Return: the number of nodes
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *add;

	add = malloc(sizeof(list_t));
	if (add == NULL)
		return (NULL);

	add->str = strdup(str);

	add->len = _strlen(str);
	add->next = *head;
	*head = add;

	return (add);
}


