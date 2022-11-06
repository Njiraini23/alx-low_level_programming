#include "main.h"
/**
*
*@checker:helper
* @a:int
* @b:int
*_sqrt_recursion - returns the natural square root of a number
*
*Return: int
*/
int checker(int a, int n)
{
	if (a * a == n)
	{
		return (a);
	}
	if (a * a > n)
	{
		return (-1);
	}
	else
	{
		return (cheker(a + 1, n));
	}
}
/**
* _sqrt_recursion -Find the square root of a number
*@n:square root integer
*Return: squareroot of a number(n)
*/
int _sqrt_recursion(int n)
{
	return (checker(1, n));
}
