// Ultra-Fast Mathematician

#include <stdio.h>

int main () {
	char c, A [100], size = 0;

	c = getchar ();

	while (c != '\n') {
		A [size ++] = c;
		c = getchar ();
	}
	
	c = getchar ();
	size = 0;

	while (c != '\n') {
		printf ("%d", A [size ++] != c);
		c = getchar ();
	}

	return 0;
}