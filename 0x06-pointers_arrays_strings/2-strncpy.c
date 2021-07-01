#include "holberton.h"

/**
 * _strncpy - Copies a string
 *
 * @dest: The input
 * @src: string to be copied
 * @n: Number of bytes
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int u;

	u = 0;

	while (u < n && src[u] != '\0')
	{
		dest[u] = src[u];
		u++;
	}

	while (u < n)
	{
		dest[u] = '\0';
		u++;
	}

	return (dest);
}
