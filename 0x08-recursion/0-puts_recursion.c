#include "main.h"

/**
* _puts_recursions -Prints string
* @s: pointer to a string
*
*Return: void
*/
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
