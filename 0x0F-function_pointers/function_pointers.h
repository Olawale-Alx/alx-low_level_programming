#ifndef HEADERGUARD
#define HEADERGUARD

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int _putchar(char c);
int int_index(int *array, int size, int (*cmp)(int));
int (*get_op_func(char *s))(int, int);
char *op;
#endif
