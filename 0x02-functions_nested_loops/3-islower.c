#include "holberton.h"

/**
 * _islower - Shows 1 if the input is a lowercase character
 * another cases, shows 0
 *
 * Return: 1 for lowercase. 0 for another case
 *
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	else
	{
		return (0);
	}

	_putchar('\n');

}