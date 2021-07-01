#include "holberton.h"

/**
 * leet - encodes a string into 1337 mozart
 *
 * @n: input
 *
 * Return: n's value
 *
 */

char *leet(char *n)
{
	int i, j;
	char v1[] = "aAeEoOtTlL";
	char v2[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[i] == v1[j])
			{
				n[i] = v2[j];
			}
		}
	}

	return (n);
}
