#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*print_tab -prints any array of strings
*@tab: the arrays of tabs to print
*
*Return : void
*/
void print_tab(char **tab)
{
	int i;

	for (i = 0; tab[i] != NULL; ++i)
	{
		printf("%s\n", tab[i]);
	}
}
/**
*main -checker for code
*
*Return: 1 if there is an error and 0 otherwise
*/
int main(void)
{
	char **tab;

	tab = strtow("		");
	if (tab == NULL)
	{
		printf("Failed\n");
		return (1);
	}
	print_tab(tab);
	return (0);
}


