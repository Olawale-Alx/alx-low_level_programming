#include "holberton.h"

/**
 * puts2 - This function prints every other
 * character of a string, starting with the first character
 *
 * @str: Parameter to be evaluated
 *
 * Return: 0
 */

void puts2(char *str)
{
	int length = 0;
	int e = 0;
	char *t = str;
	int u;

	while (*t != '\0')
	{
		t++;
		length++;
	}
	e = length - 1;

	for (u = 0; u <= e; u++)
	{
		if (u % 2 == 0)
		{
			_putchar(str[u]);
		}
	}

	_putchar('\n');
}
