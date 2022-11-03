#include "main.h"

/**
*_memset -to fill the memory with a constant byte
*@n: bytes of memory pointed to by @s
*@s: the constant byte
*@b: the meory area pointer
*Return: a pointer to memory area
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
