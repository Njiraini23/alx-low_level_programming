#include "function_pointers.h"
#include <stdio.h>

/**
*array_iterator -executes a function on each element array
*@array: the array
*@size: the size of array
*@action: pointer to the function needed to pass
*
*Return: Nothing
*/



void array_iterator(int *array, size_t size, void (*action)(int))
{
	/* unsigned int, because size_t can never be negative */
	unsigned int i;
	void (*ptr)(int);

	if (size <= 0)
		return;

	if (array == NULL || action == NULL)
		return;

	ptr = action;
	for (i = 0; i < size; i++)
		ptr(array[i]);
}
