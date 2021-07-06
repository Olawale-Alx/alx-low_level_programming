#include "holberton.h"

/**
 * print_chessboard - This function prints a chessboard
 * of a 8x8 size
 *
 * @a: Array variable
 *
 */

void print_chessboard(char (*a)[8])
{
	int t;
	int u;

	for (t = 0; t < 8; t++)
	{
		for (u = 0; u < 8; u++)
		{
			_putchar(a[t][u]);
		}

	_putchar('\n');
	}
}
