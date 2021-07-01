#include "holberton.h"

/**
 * _strncat - Concatenates two strings
 * @dest: String destination
 * @src: String to be added to dest
 * @n: Number of bytes
 *
 * Return: void
 */

char *_strncat(*char *dest, char *src, int n)
{
	int p;
	int q;

	int p = 0;

	while (dest[p] != '\0')
	{
		p++;
	}

	q = 0;
	while (q < n && src[q] != '\0')
	{
		dest[p] = src[q];
		p++;
		q++;
	}

	dest[p] = '\0';

	return (dest);
}
