// beautiful matrix

#include <stdio.h>
#include <math.h>

int main () {
	char c = 0;
	char row = 1, column = 0;
	char flag_found = 0;

	for (int i = 0; i < 25; i++) {
		c = getchar ();

		if (! flag_found) {
			++ column;

			if (column == 6) {
				column = 1;
				++ row;
			}

			if (c == '1') {
				flag_found = 1;
			}
		}

		c = getchar ();
	}

	printf ("%d", abs (3 - row) + abs (3 - column));

	return 0;
}