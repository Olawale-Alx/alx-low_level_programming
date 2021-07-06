#include "holberton.h"

/**
 * print_chessboard - This function prints a chessboard
 * of a 8x8 size
 *
 * @a: Array variable
 *
 * Return: none
 */

void chess_board(char (*a)[8])
{
	int v;
	int w;

	for (v = 0; v < 8; v++)
	{
		for (w = 0; w < 8; w++)
		{
			_putchar(a[v][w]);
		}

		_putchar('\n');
	}
}
