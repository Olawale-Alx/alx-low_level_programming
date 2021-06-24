#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints number 1 to 100
 * Multiples 0f 3, print Fizz
 * Multiples of 5, print Buzz
 * Multiples of 3 and 5, print FizzBuzz
 *
 * Return: 0 (success)
 *
 */

int main(void)
{
	int a;

	for (a = 1; a < 100; a++)
	{
		if (a % 15 == 0)
		{
			printf("FizzBuzz ");
		}

		else if (a % 5 == 0)
		{
			printf("Buzz ");
		}

		else if (a % 3 == 0)
		{
			printf("Fizz ");
		}

		else
		{
			printf("%d ", a);
		}
	}

	printf("Buzz");
	printf("\n");

	return (0);
}
