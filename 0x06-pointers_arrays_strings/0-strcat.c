#include "main.h"

/**
*_strcat - to concatenate two strings
*@dest:pointer for argument 1
*@src:pointer for argument 2
*Return: the concentated strings
*/
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		;
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
