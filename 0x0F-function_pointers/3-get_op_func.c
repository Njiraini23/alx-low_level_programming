#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
*get_op_func -program that determines the operator to use
*@s: Char that determines operator function to use
*
*Return: pointer to operator or NULL if failure
*/
int (*get_op_func(char *s))(int, int)
{

	/* ops[6][2]*/
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	int i;

	i = 0;
	while (i < 5)
	{
		if (*ops[i].op == *s)
			return (ops[i].f);

		i++;
	}
	return (NULL);
}

