// Is your horseshoe on the other hoof?

#include <stdio.h>

int main () {
	int H [4], count = 0;
	int a, b, c, d;
	int i, j;

	// scanf ("%d %d %d %d", &H [0], &H [1], &H [2], &H [3]);
	scanf ("%d %d %d %d", &a, &b, &c, &d);

	if (b == a) {
		++ count;
	}
	
	if (
		c == b
		|| c == a
	) {
		++ count;
	}

	if (
		d == c
		|| d == b
		|| d == a
	) {
		++ count;
	}

	printf ("%d", count);

	return 0;
}