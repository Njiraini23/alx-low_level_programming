#include "main.h"
/**
*
*@_strncpy -copy one string to another
*@dest: pointer for argument 1
*@src: pointer to argument 2
*@n: size
*Return:the strings copied
*/
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	for (; j < n; j++)
		dest[j] = '\0';
	return (dest);
}
