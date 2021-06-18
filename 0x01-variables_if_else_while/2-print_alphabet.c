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

	for (character = 'a'; character <= 'z'; character++)
	{
		putchar(character);
	}

	putchar('\n');

	return (0);
}
