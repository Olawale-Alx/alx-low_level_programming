#include <stdio.h>

int main()
{
	char character = 'a';
	char nline = '\n';

	for (character = 'a'; character <= 'z'; character++) {
		putchar(character);
		putchar(nl);
	}

	return (0);
}
