#include "holberton.h"

/**
 * cap_string - capitalizes all words of a string
 *
 * @n: Input
 *
 * Return: string
 *
 */

char *cap_string(char *n)
{
	int k;

	k = 0;

	if (n[0] >= 'a' && n[0] <= 'z')
	{
		n[0] = n[0] - 32;
	}
	for (k = 0; n[k] != '\0'; k++)
	{
		switch (n[k])
		{
		case ',':
		case ';':
		case '.':
		case '!':
		case '?':
		case '"':
		case '(':
		case ')':
		case '{':
		case '}':
		case ' ':
		case '\n':
		case '\t':
			if (n[k + 1] > 96 && n[k + 1] < 123)
			{
				n[k + 1] = n[k + 1] - 32;
			}
		}
	}

	return (n);
}
