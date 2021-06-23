#include "holberton.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: No return
 *
 */

void times_table(void)
{
	int e, f, g;

	for (e = 0; e <= 9; e++)
	{
		_putchar(48);
		for (f = 1; f <= 9; f++)
		{
			g = e * f;
			_putchar(44);
			_putchar(32);

			if (g <= 9)
			{
				_putchar(32);
				_putchar(g + 48);
			}

			else
			{
				_putchar((g / 10) + 48);
				_putchar((g % 10) + 48);
			}
		}
		_putchar('\n');
	}

}
