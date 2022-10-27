#include "main.h"
/**
*_strcpy - copies strings pointed by src
* @dest:char type
* @src: char type of string
*Description:copies the string pointed by the pointer src
* to the buffer pointed to by 'dest'
* Return: Pointer to 'dest'
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
