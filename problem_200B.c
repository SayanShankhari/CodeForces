// Drinks

#include <stdio.h>

int main () {
	int n, x, t;
	double f = 0;

	scanf ("%d", &n);
	t = n;

	while (t --) {
		scanf ("%d", &x);
		f += ((double) x) / n;
	}

	printf ("%0.12f", f);

	return 0;
}