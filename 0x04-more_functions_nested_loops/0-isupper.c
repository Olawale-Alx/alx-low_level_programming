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
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
