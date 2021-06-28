#include "holberton.h"

/**
 * _strcpy - This function copies string pointed to by src
 * to the buffer pointed to by dest
 *
 * @dest: Value to be evaluated
 * @src: Value to be evaluated
 *
 * Return: 0
 *
 */

char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int v = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}

	for (; v < l; v++)
	{
		dest[v] = src[v];
	}

	dest[l] = '\0';

	return (dest);

}
