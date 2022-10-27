#include "main.h"
/**
*rev_string -reverses a string
*@s: the array string to be reversed
*Return: 0 for success
*/

void rev_string(char *s)
{
	int a = 0;

	while (*(s + a))
		a++;
	a = a - 1;
	while (a >= 0)
	{
		_putchar(*(s + a));
		a--;
	}
	_putchar('\n');
}
