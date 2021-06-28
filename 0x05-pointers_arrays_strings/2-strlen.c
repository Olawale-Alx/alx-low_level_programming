#include "holberton.h"

/**
 * _strlen - Returns the length of a string
 *
 * @s: Parameter to be evaluated
 * Return: len
 *
 */

int _strlen(char *s)
{
	int leng = 0;

	while (*s != '\0')
	{
		s++;
		leng++;
	}

	return (leng);

}
