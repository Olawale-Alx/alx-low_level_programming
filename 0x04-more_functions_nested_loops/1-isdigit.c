#include "holberton.h"

/**
 * _isdigit - This function checks for a digit (0
 * through 9
 *
 * @c: Integer value for return
 *
 * Return: 1 if c is a digit, 0 if otherwise
 *
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
