#include "holberton.h"

/**
 * factorial - returns the factorial of a given number
 * @n: integer value to be factorized
 *
 * Return: factorisation
 *
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0 || n == 1)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
