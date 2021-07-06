#include "holberton.h"

/**
 * _memset - This function fills the memory with
 * with a constant byte
 *
 * @s: Input character
 * @b: Constant byte
 * @n: n bytes of the memory
 *
 * Return: A pointer to the memory area s
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	int p = 0;

	while (n > 0)
	{
		s[p] = b;
		p++;
		n--;
	}

	return (s);
}
