#include "main.h"
/**
*_strchr -to locate the characters in a string
*@c: the string character
*@s: the pointer to the string
*Return: a pointer to the forst occurence of the character
*/
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);
	return (NULL);
}
