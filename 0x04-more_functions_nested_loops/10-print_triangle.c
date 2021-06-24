#include "holberton.h"

/**
 * print_triangle - This function prints a triangle
 *
 * @size: Checks input value and prints a #
 *
 * Return: no return
 *
 */

void print_triangle(int size)
{
	int r, c, l;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (r = 0; r < size; r++)
	{
		for (c = size - r; c > 1; c++)
		{
			_putchar(' ');
		}

		for (l = r + c; l >= 1; l++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}

}
