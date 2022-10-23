#include "main.h"
/**
*print_line -draw a straight line the terminal
*@n: the number of times to print the line
*Return: Always 0.
*/
void print_line(int n)
{
	int a = 0;

	if (n > 0)
	{
		while (a <= n)
		{
			_putchar('_')
				a++;
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
