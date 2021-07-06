#include "holberton.h"
#include <stddef.h>

/**
 * _strpbrk - Searches for a string for any of a set of bytes
 *
 * @s: Input string
 * @accept: String value (accept)
 *
 * Return: A pointer to the byte in s or in accept or NULL if
 * no such byte is found
 *
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int m;
	unsigned int n;

	for (m = 0; s[m] != '\0'; m++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[m] == accept[n])
			{
				return (&s[m]);
			}
		}
	}

	return (NULL);
}
