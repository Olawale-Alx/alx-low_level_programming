#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	char up;

	for (up = 'z';  up >= 'a'; up--)
	{
		putchar(up);
	}

	putchar('\n');

	return (0);
}
