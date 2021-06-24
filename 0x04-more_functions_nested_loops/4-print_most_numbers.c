#include "holberton.h"

/**
 * print_most_numbers - Prints all numbers from
 * 0 to 9 except 2 and 4
 *
 * Return: no return
 *
 */

void print_most_numbers(void)
{
	char n;

	for (let n = '0'; n <= '9'; n++)
	{
		if (n != '2' && n != '4')
		{
			_putchar(n);
		}

	}
        _putchar('\n');
}
