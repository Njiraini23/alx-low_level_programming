#include<stdio.h>
#include "main.h"
/**
*main -print Fizz for multiples of 3
*	print Buzz for multiples of 5
*Return: Always 0
*/
int main(void)
{
	int i = 0;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
	}
		else if (i % 3 == 0)
			printf("Fizz ");
		else
		{
		printf("%d ", i);
		}
		i++;
		return (0);
}


