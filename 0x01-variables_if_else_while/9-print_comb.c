#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	int sett;

	for (sett = 0; sett <= 9; sett++)
	{
		putchar(sett + '0');

		if (sett < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
