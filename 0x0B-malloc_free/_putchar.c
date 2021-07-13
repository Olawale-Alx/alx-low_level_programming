#include <unistd.h>

/**
 * _puchar - writes the standard charcater c to stdout
 *
 * Return: On success 1
 *
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
