#include "holberton.h"

/**
 * print_diagsums - prints the sum of two diagonals
 * of a square matrix of integers
 *
 * @a: integer
 * @size: size of the matrix
 *
 * Return: void
 *
 */

void print_diagsums(int *a, int size)
{
	int b;
	int tl = 0;
	int tr = 0;
	int ss = size * size;

	for (b = 0; b < ss; b += size + 1)
	{
		tl += a[b];
	}

	for (b = size - 1; b < s - 1; b += size - 1)
	{
		tr += a[b];
	}

	printf("%d, %d\n", tl, tr);
}
