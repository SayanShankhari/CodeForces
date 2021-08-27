// In Search of an Easy Problem

#include <stdio.h>

int main () {
	char c, flag = 0;
	int n;

	scanf ("%d", &n);
	c = getchar ();

	while (n --) {
		c = getchar ();
		
		if (!flag && c == '1') {
			flag = 1;
		}

		c = getchar ();
	}

	if (flag) {
		printf ("HARD");
	} else {
		printf ("EASY");
	}

	return 0;
}