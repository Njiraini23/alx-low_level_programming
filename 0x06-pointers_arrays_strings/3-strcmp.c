#include "main.h"
/**
*_strcmp -compare strings
*@s1: pointer 1
*@s2: pointer 2
*Return: positive, negative or zero
*/
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}
