// Insomnia cure

#include <stdio.h>
#include <stdlib.h>

int main () {
	int A [4], d, i, j, count = 0;

	scanf ("%d\n%d\n%d\n%d\n%d", &A [0], &A [1], &A [2], &A [3], &d);

	char *D = (char *) calloc (d, sizeof (char));
	
	if (
		A [0] == 1
		|| A [1] == 1
		|| A [2] == 1
		|| A [3] == 1
	) {
		count = d;
	} else {
		for (i = 0; i < 4; i++) {
			j = A [i] - 1;
		
			while (j < d) {
				* (D + j) = 1;
				j += A [i];
			}
		}

		for (i = 0; i < d; i++) {
			if (*(D + i)) {
				++ count;
			}
		}
	}

	printf ("%d", count);

	return 0;
}