#include "holberton.h"

/**
 * print_rev - Prints a string in reverse
 *
 * @s: Parameter
 *
 * Return: string characters in reverse
 */

void print_rev(char *s)
{
	int leng;

	for (leng = 0; s[leng] != '\0'; leng++)
	{
	}

	for (leng = leng - 1; leng >= 0; leng--)
	{
		_putchar(s[leng]);
	}

	_putchar('\n');


}
