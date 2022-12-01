#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
*print_name -This function prints a name 
*@name: String to the printed out
*@f: function pointer
*
*Return: Zero
*/
void print_name(char *name,void (*f)(char *))
{
	void (*ptr)(char *);

	if (name == NULL || f == NULL)
		return;

	ptr =f;
	ptr(name);
}
