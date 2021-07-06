#include "holberton.h"

/**
 * _memcpy - This function copies a memory area
 *
 * @dest: The return destination
 * @src: Memory area
 * @n: Number of bytes from memory area src
 *
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int e = 0;

	while (n > 0)
	{
		dest[r] = src[e];
		r++;
		e++;
		n--;
	}

	return (dest);
}
