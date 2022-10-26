#include "main.h"
/**
*_strlen -checks the lnegth of a string
*@s:a pointer
*Return:the length of a string
*/
int _strlen(char *s)
{
	int  c;

	for (c = 0; s[c] != '\0'; c++)
		;

	return (c);
}
