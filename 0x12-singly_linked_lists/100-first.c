#include<stdio.h>

void msg(void)__attribute__((constructor));

/**
*msg - prints a specific message
*
*Return : No return
*/
void msg(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
