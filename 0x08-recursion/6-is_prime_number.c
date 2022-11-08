#include "main.h"
/**
* check  -checks whether number is prime
*@a: int
*@b: int
*Return: prime numbers
*/
int check(int a, int b)
{
	if (b < 2 || b % a == 0)
		return (0);
	else if (a > b / 2)
		return (1);
	else
		return (check(a + 1, b));
}

/**
* is_prime_number -chek for prime number
*@n:integer
*Return: prime numbers
*/
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (check(2, n));
}
