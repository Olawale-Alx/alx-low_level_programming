#include "holberton.h"

/**
 * _print_rev_recursion - Prints a string in reverse
 *
 * @s: String value)
 *
 * Return: void
 *
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}

}
