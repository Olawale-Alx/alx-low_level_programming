#include <stdio.h>

int main(void)
{
	char character;
	int integer;
	long longint;
	long long longlongint;
	float floating;

	printf("Size of a char: %lu byte(s)", sizeof(character));
	printf("Size of an int: %lu byte(s)", sizeof(integer));
	printf("Size of a long int: %lu byte(s)", sizeof(longint));
	printf("Size of a long long int: %lu byte(s)", sizeof(longlongint));
	printf("Size of a float: %lu byte(s)", sizeof(floating));

	return (0);
}
