// Hit the Lottery

#include <stdio.h>

int main () {
	int n, count = 0;

	scanf ("%d", &n);

	if (n > 99) {
		count += (n / 100);
		n %= 100;
	}

	if (n > 19) {
		count += (n / 20);
		n %= 20;
	}

	if (n > 9) {
		count += (n / 10);
		n %= 10;
	}

	if (n > 4) {
		count += (n / 5);
		n %= 5;
	}

	if (n > 0) {
		count += n;
	}

	printf ("%d", count);

	return 0;
}