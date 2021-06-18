#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	char character = 'a';
	char nline = '\n';

	for (character = 'a'; character <= 'z'; character++)
	{
		putchar(character);
		putchar(nl);
	}

	return (0);
}
