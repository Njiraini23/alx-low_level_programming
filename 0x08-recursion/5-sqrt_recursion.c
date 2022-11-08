#include "main.h"
/**
* check -square root
* @a:int
* @b:int
* _sqrt_recursion - returns the natural square root of a number
*
*Return: int
*/
int check(int a, int b)
{
	if (a * a == b)
	{
		return (a);
	}
	if (a * a > b)
	{
		return (-1);

		return (check(a + 1, b));
	}
}
/**
* _sqrt_recursion -Find the square root of a number
*@n:square root integer
*Return: squareroot of a number(n)
*/
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check(1, n));
}
