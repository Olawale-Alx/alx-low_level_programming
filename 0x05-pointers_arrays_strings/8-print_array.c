#include "holberton.h"

/**
 * print_array - Function that prints n elements
 * of an array of integers, followed by a new line
 *
 * @a: Value to be evaluated
 * @n: Value to be evaluated
 * Return: None
 */

void print_array(int *a, int n)
{
	int z;

	for (z = 0; z < n; z++)
	{
		printf("%d", a[z]);

		if (z != n - 1)
		{
			printf(", ");
		}

	}

	printf("\n");

}
