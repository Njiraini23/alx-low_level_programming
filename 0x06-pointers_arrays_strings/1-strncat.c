#include "main.h"
/**
*_strncat -to concanate two strings
*@dest: pointer to arguyment 1
*@src: the second pointer
*@n: Size
*Return: Concatenated string
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		;
	}
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}

	dest[i] = '\0';
	return (dest);
}

