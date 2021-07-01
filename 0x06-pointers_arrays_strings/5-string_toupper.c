#include "holberton.h"

/**
 * string_toupper - Takes inputs in lowercase
 * and covert to uppercase
 *
 * @n: Pointer
 *
 * Return: string in uppercase
 *
 */

char *string_toupper(char *n)
{
	int a;

	a = 0;

	while (n[a] != '\0')
	{
		if (n[a] >= 'a' && n[a] <= 'z')
		{
			n[a] = n[a] - 32;
		}

		a++;
	}

	return (0);
}
