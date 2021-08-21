// Team: Petya, Vasya and Tonya

#include <stdio.h>

int main () {
	int n, k, count = 0;
	int A[50], i;

	scanf ("%d %d", &n, &k);
	--k;

	for (i = 0; i < n; i++) {
		scanf ("%d", &A [i]);
	}

	for (i = 0; i < n; i++) {
		if (A [i] > 0 && A [i] >= A [k]) {
			++ count;
		}
	}

	printf ("%d", count);

	return 0;
}