// beautiful matrix

#include <stdio.h>
#include <math.h>

int main () {
	char i, c = 0;
	int count_1 = 0, count_2 = 0, count_3 = 0;

	while (c != '\n') {
		c = getchar ();

		if (c == '1') {
			++ count_1;
		} else if (c == '2') {
			++ count_2;
		} else {
			++ count_3;
		}

		c = getchar ();
	}

	for (i = 0; i < count_1; i++) {
		printf ("1");

		if (
			(i < count_1 - 1)
			|| (
				i == count_1 - 1
				&& (count_2 > 0 || count_3 > 0)
			)
		) {
			printf ("+");
		}
	}

	for (i = 0; i < count_2; i++) {
		printf ("2");

		if (
			(i < count_2 - 1)
			|| (
				i == count_2 - 1
				&& count_3 > 0
			)
		) {
			printf ("+");
		}
	}

	for (i = 0; i < count_3; i++) {
		printf ("3");

		if (
			(i < count_3 - 1)
		) {
			printf ("+");
		}
	}

	return 0;
}