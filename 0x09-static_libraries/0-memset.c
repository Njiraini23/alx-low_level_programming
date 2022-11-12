#include "main.h"
/**
*_memset - fill the memory with a constant byte
*@s: the starting point of a memory
*@b: the desired value of the memory
*@n:number of bytes to be changed
*Return:The chnaged value
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
