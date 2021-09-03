// Pangram

#include <stdio.h>
#include <stdlib.h>

int main () {
	int n;
	char c;

	char *A = (char *) calloc (26, sizeof (char));

	scanf ("%d", &n);

	c = getchar ();

	while (n--) {
		c = getchar ();

		if (c < 'a') {
			*(A + c - 'A') = 1;
		} else {
			*(A + c - 'a') = 1;
		}
	}

	n = 25;	// use as index
	c = 1;	// use as flag

	while (n >= 0) {
		if (*(A + n) == 0) {
			c = 0;
			break;
		}
		-- n;
	}

	printf ("%s", c ? "YES" : "NO");

	return 0;
}