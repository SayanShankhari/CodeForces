// Anton and Letters

#include <stdio.h>

int main () {
	char c, A [1000], flag;
	int i, size = 0, count = 0;

	c = getchar ();
	c = getchar ();

	while (c != '\n') {
		if (c != '}') {
			flag = 0;

			for (i = 0; i < size; i++) {
				if (c == A [i]) {
					flag = 1;
					break;
				}
			}

			if (! flag) {
				A [size ++] = c;
				++count;
			}
		}

		c = getchar ();

		if (c == ',') {
			c = getchar ();
			c = getchar ();
		}
	}

	printf ("%d", count);

	return 0;
}