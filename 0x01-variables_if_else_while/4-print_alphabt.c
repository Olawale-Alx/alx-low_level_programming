#include <stdio.h>


int main()
{
	char letters;

	for ( letters = 'a'; letters <= 'z'; letters++ ) {
		if ( letters != 'e' && letters != 'q' ) {
			putchar(letters);
			putchar('\n');
		}

	}

	return (0);

}
