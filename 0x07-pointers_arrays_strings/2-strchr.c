#include "holberton.h"
#include <stddef.h>

/**
 * _strchr - Function that locates character in a string
 *
 * @s: String
 * @c: Character
 *
 * Return: returns a pointer to the first char of c or s
 * or NULL if the character is not found
 *
 */

char *_strchr(char *s, char c)
{
	int w;

	for (w = 0; s[w] != '\0'; w++)
	{
		if (s[w] == c)
		{
			return (&s[w]);
		}
	}

	return (0);
}
