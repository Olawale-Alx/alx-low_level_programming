#include "holberton.h"

/**
 * _puts - This function prints a string,
 * followed by a new line, to stdout
 *
 * @str: Parameter
 *
 * Return: String, followed by a new line
 */

void _puts(char *str)
{
	int e;

	while (*(str + e) != '\0')
	{
		_putchar(str[e]);
		e++;
	}

	_putchar('\n');
}
