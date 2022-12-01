#include <stdio.h>
#include "function_pointers.h"

/**
*int_index - returns the index of the first element
*@array: the array to be considered
*@size: the number of elements in an array
*@cmp: a pointerto the function to be used
*
*Return: -1 and 0
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int (*ptr)(int);

	if (size <= 0)
		return (-1);

	if (array == NULL || cmp == NULL)
		return (-1);

	ptr = cmp;
	for (i = 0; i < size; i++)
	{
		if (ptr(array[i]))
			return (i);
	}
	return (-1);
}
