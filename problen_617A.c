// Wrong submission

#include <stdio.h>

int main () {
	int x, s = 0;

	scanf ("%d", &x);

	if (x % 5 >= 0) {
		s += x / 5;
		x %= 5;
	}
	
	if (x % 4 >= 0) {
		s += x / 4;
		x %= 4;
	}

	if (x % 3 >= 0) {
		s += x / 3;
		x %= 3;
	}

	if (x % 2 >= 0) {
		s += x / 2;
		x %= 2;
	}

	if (x == 1) {
		++s;
	}

	printf ("%d", s);

	return 0;
}