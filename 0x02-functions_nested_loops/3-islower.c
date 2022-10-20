#include "main.h"
/**
*_islower-checks for lower case character
*@c:is the character to be checked
*Return: 1 if C is lowercase and 0 if otherwise
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
