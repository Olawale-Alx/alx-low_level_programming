#include "holberton.h"

/**
 * _abs - gives the absolute value of an integer
 *
 * @n: Calculates absolute value of an integer
 *
 * Return: Absolute value
 *
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
