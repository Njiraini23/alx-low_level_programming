#include "main.h"
/**
*flip_bits -the number of bits to flip
*to get from one number to another
*@n:the first unsigned long int
*@m: the seconf int
*
*Return: the number of bits needed
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int difference, result;
	unsigned int j, i;

	j = 0;
	result = 1;
	difference = n ^ m;
	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if (result == (difference & result))
			j++;
		result <<= 1;
	}
	return (j);
}
