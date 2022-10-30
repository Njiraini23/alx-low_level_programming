#include "main.h"

/**
*reverse_array -reverses the contents of integers arrays
*@a: the integeres to be reversed
*@n:size of arrays
*/
void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	for (i = 0; i < (n / 2); i++)
	{
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
	}
}
