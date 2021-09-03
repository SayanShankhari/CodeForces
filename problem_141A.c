// Amusing Joke

#include <stdio.h>
#include <stdlib.h>

int main () {
	char c, flag = 1;

	char *A = (char *) calloc (26, sizeof (char));
	char *B = (char *) calloc (26, sizeof (char));

	c = getchar ();

	while (c != '\n') {
		++ *(A + c - 'A');
		c = getchar ();
	}
	
	c = getchar ();

	while (c != '\n') {
		++ *(A + c - 'A');
		c = getchar ();
	}

	c = getchar ();

	while (c != '\n') {
		++ *(B + c - 'A');
		c = getchar ();
	}

	for (int i = 0; i < 26; i++) {
		if (*(A + i) != *(B + i)) {
			flag = 0;
			break;
		}
	}

	printf ("%s", (flag) ? "YES" : "NO");

	return 0;
}