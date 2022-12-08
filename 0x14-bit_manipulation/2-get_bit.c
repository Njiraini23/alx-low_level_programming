#include "main.h"

/**
*get_bit - the value of a bit at a given index
*@n: the unsigned long int
*@index: the index from 0
*
*Return: te value of the bit at index or -1
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int div, res;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	div = 1 << index;
	res = n & div;
	if (res == div)
		return (1);
	return (0);
}
