#include <stdio.h>
/**
* _putchar -write character c to  stdout
* @c: The character to print
*
*Return: on success 1.
*on error, -1 is returned , and errno is set appropriately.
*/
int __putchar(char c)
{
	return (write(1, &c, 1));
}
