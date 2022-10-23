#include "main.h"
/**
*print_triangle -To print Triangles
*@size: the size of the triangle
*Return: Always 0
*/
void print_triangle(int size)
{
	int i, j = 0;
	int space;

	if (size > 0)
	{
		while (i < size)
		{
			space = size - i - 1;
			while (i < size)
			{
				if (space > i)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
				i++;
			}
			j++;
			i = 0;
			_putchar ('\n');
		}
	}
	else
		_putchar('\n');
}
