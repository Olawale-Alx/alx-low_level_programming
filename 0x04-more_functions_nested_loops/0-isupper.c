#include "holberton.h"

/**
 * _isupper - A function that checks for uppercase character
 *
 * @c: The character in ASCII code
 *
 * Return: Returns 1 if c is uppercase, 0 if otherwise
 */

int _isupper(int c)
{
	int d;

	for (d = 65; d < 91; d++)
	{
		if (c == d)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
