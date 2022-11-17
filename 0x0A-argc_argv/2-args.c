#include <stdio.h>
/**
* main - the functionmain
*@argc: the argument count
*@argv: the pointer to arguments
*
*Return: Always 0
*/
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}

