#include "holberton.h"

/**
 * main - this program prints all arguements it receives
 *
 * @argc: arguement count
 * @argv: array of pointers to arguement
 *
 * Return: 0 if successful and 1 if not
 *
 */

int main(int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s\n", *argv[]);
	}

	return (0);
}
