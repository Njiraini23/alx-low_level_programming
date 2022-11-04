#include "main.h"
/**
*_memcpy - to copy a memory area copies n bytesfrom the memory* area dest
*@n: functional copies
*@src: the byts inthe memory area
*@dest: to the meory area
*
*Return: a pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
			i++;
	}
	return (dest);
}



