#include "main.h"
/**
*print_line -draw a straight line the terminal
*@n: the number of times to print the line
*Return: Always 0.
*/
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
