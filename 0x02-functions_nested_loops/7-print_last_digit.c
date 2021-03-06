#include "holberton.h"

/**
 * print_last_digit - Prints the last digit of a number
 *
 * @n: Prints last digit of an integer
 *
 * Return: last digit
 *
 */

int print_last_digit(int n)
{
	int m;

	m = n % 10;

	if (m < 0)
	{
		_putchar(-m + 48);
		return (-m);
	}
	else
	{
		_putchar(m + 48);
		return (m);
	}
}
