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
	int i;
	int j;

	for (i = 0; i <= 8; i++)
	{
		for (j = 0; j <= 8; j++)
		{
			_putchar(a[i][j]);
		}

	_putchar('\n');
	}
}
