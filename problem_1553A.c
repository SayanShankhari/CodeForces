// Digits Sum

#include <stdio.h>

int main () {
	int t, n;

	scanf ("%d", &t);

	while (t --) {
		scanf ("%d", &n);

		/*if (n < 9) {
			printf ("0\n");
		} else {
			if (n % 10 == 9) {
				printf ("%d\n", n / 10 + 1);
			} else {
				printf ("%d\n", n / 10);
			}
		}*/

		printf("%d\n", (n + 1) / 10);
	}

	return 0;
}