#include "main.h"
/**
*set_bit - sets the value of a bit to 1
*@n:the long int
*@index: the index starting from 0
*
*Return: 1 or -1
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	i = 1 << index;
	*n = *n | i;

	return (1);
}
