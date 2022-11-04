#include "main.h"
/**
*_strpbrk - searches for a string ofany byte
*@s:string of any of the bytes
*@accept:accepts any of set of bytes
*Return: accept if bytes found and NULL if otherwise
*/
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
