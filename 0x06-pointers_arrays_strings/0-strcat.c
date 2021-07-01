#include "holberton.h"

/**
 * _strcat - This function concatenates (add)
 * two strings together
 *
 * @dest: Destination str for the concatenation
 * @src: String to be appended
 *
 * Return: A pointer to the resultind string dest
 */

char *_strcat(char *dest, char *src)
{
	int k;
	int l;

	k = 0;

	while (dest[k] != '\0')
	{
		k++;
	}

	l = 0;
	while (src[l] != '\0')
	{
		dest[k] = src[l];
		k++;
		l++;
	}

	dest[j] = '\0';

	return (dest);

}
