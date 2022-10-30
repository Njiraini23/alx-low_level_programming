#include "main.h"
/**
*string_toupper - converts strings to upper
*@word: pointer for argument 1
*Return: strings in upper case
*/
char *string_toupper(char *word)
{
	int i;

	for (i = 0; word[i] != '\0'; i++)
	{
		if (word[i] > 96 && word[i] < 123)
			word[i] -= 32;
	}
}
