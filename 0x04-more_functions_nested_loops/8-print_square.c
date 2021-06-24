#include "holberton.h"

/**
 * print_square - This function prints a square
 *
 * @size: checks the size of the square based on input
 *
 */

void print_square(int size)
{
	int y, z;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (y = 0; y < size; y++)
	{
		for (z = 0; z < size; z++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}

}
