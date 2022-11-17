#include <stdio.h>

/**
*main -the main argument toprint
*@argv: the pointers to strings
*@argc: the argument count
*Return: Always 0
*/
int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
