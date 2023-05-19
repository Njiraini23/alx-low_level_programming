#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>
/**
* recursive_search - searches the value in a sortted integers
*@array:  pointer to the first element of the array to search in
*@size: the number of elements in an array
*@value: the value to search for
* Return: where the index is located
*/

int recursive_search(int *array, size_t size, int value)
{
	size_t half = size / 2;
	size_t i;

	if (array == NULL || size == 0)
		return (-1);
	printf("searching in array");

	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);

	printf("\n");

	if (half && size % 2 == 0)
		half--;
	if (value == array[half])
		return ((int)half);
	if (value < array[half])
		return (recursive_search(array, half, value));
	half++;
	return (recursive_search(array + half, size - half, value) + half);
}

/**
*binary_search - binary search to return
* the index of number
*@array: input array
*@size: the size of the array
*@value: value to search in
*Return: index of the number
*/
int binary_search(int *array, size_t size, int value)
{
	int index;

	index = recursive_search(array, size, value);

	if (index >= 0 && array[index] != value)
		return (-1);
	return (index);
}
