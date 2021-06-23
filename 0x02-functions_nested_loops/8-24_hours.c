#include "holberton.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Return: no return
 *
 */

void jack_bauer(void)
{
	int u, v, w, x;

	for (u = 48; u <= 50; u++)
	{
		for (v = 48; v <= 57; v++)
		{
			for (w = 48; w <= 53; w++)
			{
				for (x = 48; x <= 57; x++)
				{
					if (u >= 50 && v >= 52)
						break;
					_putchar(u);
					_putchar(v);
					_putchar(58);
					_putchar(w);
					_putchar(x);
					_putchar('\n');
				}
			}
		}
	}
}
