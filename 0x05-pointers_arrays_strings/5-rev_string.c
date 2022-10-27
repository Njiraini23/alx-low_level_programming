#include "main.h"
/**
*rev_string -reverses a string
*@s: the array string to be reversed
*Return: 0 for success
*/

void rev_string(char *s)
{
	int i = 0;

	while (*(s + i))
		i++;
	i = i - 1;
	while (i >= 0)
	{
		_putchar(*(s + i));
		i--;
	}
	_putchar('\n');
}
