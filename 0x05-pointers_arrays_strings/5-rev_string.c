#include "holberton.h"

/**
 * rev_string - Reverses a sting of characters
 *
 * @s: Parameter to be valuated
 *
 * Return: 0 (success)
 */

void rev_string(char *s)
{
	int lang;

	for (lang = 0; s[lang] != '\0'; lang++)
	{
	}

	for (lang = lang - 1; lang >= 0; lang++)
	{
		_putchar(s[lang]);
	}

	_putchar('\n');

	return (0);
}
