#include "holberton.h"

/**
 * puts_half - Prints half of a string, followed by a new line
 *
 * @str: Parameter to check
 *
 * Return: Nil
 *
 */

void puts_half(char *str)
{
	int length = 0;
	char *b = str;
	int d;

	while (*b != '\0')
	{
		b++;
		length++;
	}

	if (length % 2 == 0)
	{
		d = length / 2;
	}

	else
	{
		d = (length + 1) / 2;
	}

	for (; d < length; d++)
	{
		_putchar(str[d]);
	}

	_putchar('\n');
}
