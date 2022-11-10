#include "main.h"
/**
*_memcpy - copy a memory area
*@dest: the destination where it is stored
*@src: the source where memory is copied from
*@n:number of bytes
*Return: the copied bytes
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r]
			n--;
	}
	return (dest);
}
