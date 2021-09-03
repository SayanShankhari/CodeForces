// I Wanna Be the Guy

#include <stdio.h>

int main () {
	int n, i, x;
	char A [100];

	for (i = 0; i < 100; i++) {
		A [i] = 0;
	}

	scanf ("%d", &n);

	scanf ("%d", &x);

	while (x --) {
		scanf ("%d", &i);
		A [i - 1] = 1;
	}

	scanf ("%d", &x);

	while (x --) {
		scanf ("%d", &i);
		A [i - 1] = 1;
	}

	x = 1; // use as flag

	for (i = 0; i < n; i++) {
		if (A [i] == 0) {
			x = 0;
			break;
		}
	}

	printf ("%s", (x) ? "I become the guy." : "Oh, my keyboard!");

	return 0;
}