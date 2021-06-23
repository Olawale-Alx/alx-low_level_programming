#include "holberton.h"

/**
 * print_alphabetx10 - Prints the alphabet in lowercase x10
 *
 * Return: 0 (success)
 *
 */

void print_alphabet_x10(void)
{
	int c, t;

	for (c = 1; c <=9; c++)
	{
		for (t = 97; t <= 122; t++)
		{
			_putchar(t);
		}

		_putchar('\n');

	}

	return (0);

}
