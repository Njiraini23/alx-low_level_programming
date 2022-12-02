#include<stdio.h>

/**
*myStartupFun - to print the print function
*
*/
void myStartupFun(void) _attribute_ ((constructor));

/**
*myStartupFun - implements myStartupFun
*/
void myStartupFun(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
