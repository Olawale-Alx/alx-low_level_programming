#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	int ten;
	int one;

	for (ten = 0; ten <= 9; ten++)
	{
		for (one = ten + 1; one <= 9; one++)
		{
			putchar(ten + '0');
			putchar(one + '0');
			if (one < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
