#include "main.h"
/**
*puts_half - to print the second half of a string
*@str: char array of string type
*Description: if odd print the last n characters
*/
void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	i++;
	for (i /= 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
