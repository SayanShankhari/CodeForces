// Stones on the Table

#include <stdio.h>

int main () {
	char ec = 0, c = 0;
	int n, count = 0;

	scanf ("%d", &n);

	c = getchar ();

	do {
		ec = c;
		c = getchar ();

		if (ec == c) {
			++ count;
		}
	} while (c != '\n');
	
	printf ("%d", count);

	return 0;
}