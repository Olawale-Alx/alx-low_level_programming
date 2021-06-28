#include <stdio.h>
#include "holberton.h"

/**
 * swap_int - This function swaps the values of two integers
 *
 * Return: No return
 *
 */

void swap_int(int *a, int *b)
{
	int y = *a;
	*a = *b;
	*b = *a;
}
