// Soldier and Bananas

#include <stdio.h>

int main () {
	int k, n, w, x;

	scanf ("%d %d %d", &k, &n, &w);

	x = k * w * (1 + w) / 2;

	if (x < n) {
		x = n;
	}

	printf ("%d", x - n);

	return 0;
}