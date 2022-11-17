#include "main.h"
/**
*_calloc - allocates memory for an array of nmemb elements
*of size bytes and returns a pointer to allocated memory
*@nmemb:number of elements in the array
*@size: the size of bytes
*Return: NULL if size is zero
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int b;

	if (nmemb == 0 || size == 0)
		return (NULL);
	a = malloc(nmemb * size);
	if (a == NULL)
		return (NULL);
	for (b = 0; b < (nmemb * size); b++)
		a[b] = 0;
	return (a);
}

