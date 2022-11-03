#ifndef MAIN_H
#define MAIN_H
/**
* File: main.h
*Description: Header file containig the prototypes for
* all functions used
*/
#include <stddef.h>
char *_memset(char *s, char b, unsigned int n);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);


#endif
