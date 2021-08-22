// Boy or Girl

#include <stdio.h>

int main () {
	char i, c = 0, flag_found, count = 0;
	char A[100], size = 0;

	while (c != '\n') {
		c = getchar ();
		flag_found = 0;

		for (i = 0; i < size; i++) {
			if (A [i] == c) {
				flag_found = 1;
				break;
			}
		}

		if (! flag_found) {
			A [size ++] = c;
			++count;

			if (count == 2) {
				count = 0;
			}
		}
	}

	printf ("%s", (count) ? "CHAT WITH HER!" : "IGNORE HIM!");

	return 0;
}