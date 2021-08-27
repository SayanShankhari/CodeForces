// George and Accommodation

#include <stdio.h>

int main () {
	int n, p, q, count = 0;

	scanf ("%d", &n);

	while (n --) {
		scanf ("%d %d", &p, &q);

		if (q - p > 1) {
			++ count;
		}
	}

	printf ("%d", count);

	return 0;
}