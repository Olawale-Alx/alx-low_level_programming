#include "holberton.h"

/**
 * _strstr - This function locates a substring
 *
 * @haystack: String value
 * @needle: First instance of string in haystack
 *
 * Return: A pointer
 *
 */

char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;
	char *n = needle;

	while (*h)
	{
		n = needle;
		h = haystack;

		while (*n)
		{
			if (*h == *n)
			{
				n++;
				h++;
			}
			else
			{
				break;
			}
		}

		if (*n == '\0')
		{
			return (haystack);
		}

		haystack++;
	}

	return (0);
}
