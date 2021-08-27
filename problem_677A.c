// Vanya and Fence

#include <stdio.h>

int main () {
	int x, n, h, count = 0;

	scanf ("%d %d", &n, &h);

	while (n --) {
		++ count;
		scanf ("%d", &x);

		if (x > h) {
			++ count;
		}
	}

	printf ("%d", count);

	return 0;
}