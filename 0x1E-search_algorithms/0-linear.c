#include "search_algos.h"
#include <stdio.h>
/**
 * linear_search - searches for a value in an array of intgers
 *using linear search algorithm
 *@array: pinter to the first element of the array
 *@size: number of elements in an array
 *@value: the value to search for
 * Return:  return the first index where the value is located
 *
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if ((array == NULL) || (size <= 0))
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
