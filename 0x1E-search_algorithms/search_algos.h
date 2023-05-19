#ifndef _SEARCH_ALGOS_H_
#define _SEARCH_ALGOS_H_

#include <stdio.h>
#include <stdlib.h>

/**
 *struct listint_s - the singly linked lists
 *
 *@n: the integers to be searched
 *@index: the index of the number
 *@next: the pointer to next node
 * Description : singly linked lists to the node
 */
typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;

/**
*struct skiplist_s - the singly linked lists with express path
*@n: the integer
*@index: Index of the node in the list
*@next: Pointer to the next node
*@express: Pointer to the next node in the express lane
*Description: singly linked list node with express lane
*/
typedef struct skiplist_s
{
	int n;
	size_t index;
	struct skiplist_s *next;
	struct skiplist_s *express
} skiplist_t;

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
listint_t *jump_list(listint_t *list, size_t size, int value);
skiplist_t *linear_skip(skiplist_t *list, int value);
#endif
