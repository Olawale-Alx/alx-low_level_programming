#include "holberton.h"

/**
 * _strspn - Gets the length of a prefix substring
 *
 * @s: String
 * @accept: Input value
 *
 * Return: null
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	int m;
	int n;
	unsigned int len;

	len = 0;

	for (m = 0; s[m] != '\0'; m++)
	{
		for (n = 0; accept[n] != '\0' && accept[n] != s[m]; n++)
			;
		if (s[m] == accept[n])
		{
			len++;
		}

		if (accept[n] == '\0')
		{
			return (len);
		}
		return (len);
	}

	return (len);
}
