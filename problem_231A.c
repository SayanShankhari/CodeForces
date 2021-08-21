// Team: Petya, Vasya and Tonya

#include <stdio.h>

int main () {
	int n, count = 0;
	unsigned char x, c;

	scanf ("%d", &n);
	c = getchar ();

	while (n--) {
		x = 0;

		c = getchar ();
		x += (c == '1');
		c = getchar ();

		c = getchar ();
		x += (c == '1');
		c = getchar ();

		c = getchar ();
		x += (c == '1');
		c = getchar ();

		if (x > 1) {
			++ count;
		}
	}

	printf ("%d", count);

	return 0;
}