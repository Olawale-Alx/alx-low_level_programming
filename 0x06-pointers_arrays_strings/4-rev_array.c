#include "holberton.h"

/**
 * reverse_array - Reverses contents of an array of integers
 * @a: Arrays of integers
 * @n: Number of integers
 *
 * Return: 0
 *
 */

void reverse_array(int *a, int n)
{
	int r;
	int rev;

	for (r = 0; r < n--; r++)
	{
		rev = a[r];
		a[r] = a[n];
		a[n] = rev;
	}
}
