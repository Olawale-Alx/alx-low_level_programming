#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * @void - Function has no argument
 *
 * Return: 0 (success)
 *
 */


int main(void)
{
	long m, num = 612852475143;

	for (m = 2; m <= num; m++)
	{
		if (num % m == 0)
		{
			num = num / m;
			m--;
		}
	}

	printf("%lu\n", m);

	return (0);
}
