#include "holberton.h"

/**
 * rev_string - Reverses a sting of characters
 *
 * @s: Parameter to be valuated
 *
 * Return: 0 (success)
 */

void rev_string(char *s)
{
	int leng;
	int g = 0;
	char *w = s;
	int q = 0;
	int a;
	char v;

	while (*w != '\0')
	{
		w++;
		leng++;
	}

	g = leng - 1;

	for (; q < ((g / 2) + 1); q++)
	{
		a = (g - q);
		v = s[q];
		s[q] = s[a];
		s[a] = v;
	}

}
