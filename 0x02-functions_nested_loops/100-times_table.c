#include "holberton.h"

/**
 * print_times_table - Prints the n times table
 *
 * @n: number times table
 *
 * Return: no return
 *
 */

void print_times_table(int n)
{
	int c, d, opera;

	if (n >= 0 && n <= 15)
	{
		for (c = 0; c <= n; c++)
		{
			_putchar(48);

			for (d = 1; d <= n; d++)
			{
				opera = c * d;
				_putchar(44);
				_putchar(32);

				if (opera <= 9)
				{
					_putchar(32);
					_putchar(32);
					_putchar(opera + 48);
				}

				else if (opera <= 99)
				{
					_putchar(32);
					_putchar((opera / 10) + 48);
					_putchar((opera % 10) + 48);
				}

				else
				{
					_putchar(((opera / 100) % 10) + 48);
					_putchar(((opera / 10) % 10) + 48);
					_putchar((opera % 10) + 48);
				}
			}

			_putchar('\n');
		}
	}
}
