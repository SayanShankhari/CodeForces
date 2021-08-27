// Magnets

#include <stdio.h>

int main () {
	char x = 0, c;
	int n, count = 1;

	scanf ("%d", &n);
	c = getchar ();

	while (n --) {
		c = getchar ();

		if (c == x) {
			++ count;
		}

		x = getchar ();
		c = getchar ();
	}

	printf ("%d", count);

	return 0;
}