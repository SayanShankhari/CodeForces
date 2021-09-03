// Candies and Two Sisters

#include <stdio.h>

int main () {
	int t, n;

	scanf ("%d", &t);

	while (t --) {
		scanf ("%d", &n);

		--n;
		n = n >> 1;

		printf("%d\n", n);
	}

	return 0;
}