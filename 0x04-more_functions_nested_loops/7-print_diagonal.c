#include "holberton.h"
/**
* print_diagonal - draws a diagonal line
*
* @n: takes in an integer
*
*/


void print_diagonal(int n)
{
	int s, v;

	if (n <= 0)
		_putchar('\n');
	for (s = 0; s < n; s++)
	{
		for (v = 0; v <= s; v++)
		{
			if (s == v)
			{
				_putchar('\\');
				_putchar('\n');
			}
			else
			{
				_putchar(' ');
			}
		}
	}
}
