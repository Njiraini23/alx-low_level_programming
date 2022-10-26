#include "main.h"
/**
*swap_int -swaps the value of two numbers
*@a : first pointer
*@b :secod pointer
*Return:Void
*/
void swap_int(int *a, int *b)
{
	int constant = *a;
	*b = *a;
	*a = constant;
}
