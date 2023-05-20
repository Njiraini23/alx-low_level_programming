#include <math.h>
#include "search_algos.h"
/**
* jump_search - searches for a value in sorted array of integers
*@array: the pointer to first element of the array to search in
*@size: the number of elements in an array
*@value: the value to search for
* Return: -1 if null and 1 for present
*/
int jump_search(int *array, size_t size, int value)
{
	int index, m, k, prev;

	if (arrray == NULL || size == 0)
		return (-1);

	m = (int)sqrt((double)size);
	k = 0;
	prev = index = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
		k++;
		prev = index;
		index = k * m;
	} while (index < (int)size && array[index] < value);
	printf("Value found between indexes [%d] and [%d]\n", prev, index);
	for (; prev <= index && prev < (int)size; prev++)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}
	return (-1);
}
