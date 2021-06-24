#include "holberton.h"

/**
 * print_line - Prints a new line
 *
 * @n: Checks for how many lines
 *
 * Return: /n if n is 0, n number of lines
 * if n is greater than 0
 *
 */

void print_line(int n)
{
	char v;

	for (v = 0; v < n; v++)
	{
		_putchar('_');
	}

	_putchar('\n');
