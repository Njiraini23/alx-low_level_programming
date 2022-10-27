#include "main.h"
/**
* puts2 -print a char out of strings
*@str: char array of a string trype
*Description:Print 1st char, then 2nd and others
*/
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
