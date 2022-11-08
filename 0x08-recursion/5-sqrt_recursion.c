#include "main.h"
/**
* check -square root
* @a:int
* @n:int
* _sqrt_recursion - returns the natural square root of a number
*
*Return: int
*/
int check(int a, int n)
{
	if (a * a == n)
	{
		return (a);
	}
	if (a * a > n)
	{
		return (-1);

		return (check(a + 1, n));
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
