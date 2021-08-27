// Anton and Danik

#include <stdio.h>

int main () {
	char c = 0;
	int count = 0;

	while (c != '\n') {
		c = getchar ();
	}

	c = getchar ();

	while (c != '\n') {
		count += (c == 'A') ? +1 : -1;

		c = getchar ();
	}

	if (count > 0) {
		printf ("Anton");
	} else if (count < 0) {
		printf ("Danik");
	} else {
		printf ("Friendship");
	}

	return 0;
}