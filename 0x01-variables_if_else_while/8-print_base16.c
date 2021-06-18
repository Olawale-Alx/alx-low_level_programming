#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	char sett;

	for (sett = 0; sett <= 9; sett++)
	putchar(sett + '0');

	for (sett = 'a'; sett <= 'f'; sett++)
	putchar(sett);

	putchar('\n');

	return (0);
}
