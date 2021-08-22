// Word Capitalization

#include <stdio.h>

int main () {
	char c = 0;
	char str[1000];

	c = getchar ();

	if (c >= 'a') {
		c ^= 'a' - 'A';
	}

	gets (str);

	printf ("%c%s", c, str);

	return 0;
}