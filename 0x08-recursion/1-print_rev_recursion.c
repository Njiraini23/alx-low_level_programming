#include "main.h"
/**
*_print_rev_recursion -To print in reverse order
*
*@s: the string to be reversed
*Return: 0
*/
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
