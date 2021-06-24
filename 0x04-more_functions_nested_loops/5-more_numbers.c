#include "holberton.h"

/**
 * more_numbers - Prints number 0 to 14 ten times
 *
 * Return: no return
 *
 */

void more_numbers(void)
{
	int q;
	char p;

	for (q = 0; q < 10; q++)
	{
		for (p = 0; p <= 14; p++)
		{
			if (p > 9)
			{
				_putchar((p / 10) + '0');
				_putchar((p % 10) + '0');
			}
		}

		_putchar('\n');

	}
}
