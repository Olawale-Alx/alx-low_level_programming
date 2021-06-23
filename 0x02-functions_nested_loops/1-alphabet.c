#include "holberton.h"

/**
 * main - Ebnprint_alphabet - Prints the alphabet ascii in lowercase
 *
 * Return: void
 *
 */

void print_alphabet(void)
{
	int a;

	for (a = 97; a < 123; a++)
	{
		_putchar(a);
	}

	_putchar('\n');

}
