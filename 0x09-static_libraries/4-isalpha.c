#include "main.h"
/**
* _isalpha -checks for alphabetical characters
* @c: the nubre to be checked
*Return: 1 if the letter is c amd 0 otherwise
*
*/
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
