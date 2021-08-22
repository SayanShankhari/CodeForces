// beautiful matrix

#include <stdio.h>
#include <math.h>

int main () {
	char A[100], size = 0, c = 0;
	char flag_match = 0;

	c = getchar ();

	while (c != '\n') {
		A [size ++] = c;
		c = getchar ();
	}

	for (int i = 0; i < size; i++) {
		c = getchar ();

		if (
			! flag_match
			&& !(
				(A [i] - c == 0)
				|| (abs (A [i] - c) == 'a' - 'A')
			)
		) {
			if (A [i] >= 'a') {
				A [i] -= 'a' - 'A';
			}

			if (c >= 'a') {
				c -= 'a' - 'A';
			}

			flag_match = (A [i] > c) ? +1 : -1;
		}
	}

	printf ("%d", flag_match);

	return 0;
}