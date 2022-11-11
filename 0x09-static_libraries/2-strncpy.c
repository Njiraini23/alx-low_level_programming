#include "main.h"
/**
*_strncpy -to copy a string
*@dest: the destination from where string is copied
*@src: the source where the string is attached
*@n: the string to be checked
*Return: string length
*/
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	{
	while (j < n && src[j] != '\0')
	dest[j] = src[j];
	i++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}

