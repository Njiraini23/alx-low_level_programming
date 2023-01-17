#include "main.h"
/**
*_strchr -the entry point
*@s:the string input
*@c:string input 2
*Return:Always 0
*
*/
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
