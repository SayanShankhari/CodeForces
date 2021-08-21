// Team: Petya, Vasya and Tonya

#include <stdio.h>

int main () {
	int n, a, b, c, count;

	scanf ("%d", &n);

	while (n--) {
		scanf ("%d%d%d", &a, &b, &c);
		
		if (
			(a == 1 && b == 1)
			|| (b == 1 && c == 1)
			|| (c == 1 && a == 1)
		) {
			++count;
		}
	}

	printf ("%d", count);

	return 0;
}