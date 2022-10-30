#include "main.h"
/**
*string_toupper - converts strings to upper
*@s: pointer for argument 1
*Return: strings in upper case
*/
char *string_toupper(char *s)
{
	int i;

i = 0;
	while (*(s + i))
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
			*(s + i) -= 'a' - 'A';
		i++;
	}
	return (s);
}


