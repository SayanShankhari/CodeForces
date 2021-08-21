// abbreviate too long word

#include <stdio.h>

int main () {
	int n, count = 0;
	char sc, ec, c;
	char str [10], size = 0;

	scanf ("%d", &n);
	c = getchar ();

	while (n--) {
		count = 0;
		size = 0;
		ec = c;
		c = getchar ();

		if (ec == '\n' && c != '\n') {
			sc = c;
		}

		while (c != '\n') {
			if (++count <= 10) {
				str [size ++] = c;
			}

			ec = c;
			c = getchar ();
		}

		if (c == '\n') {
			if (count <= 10) {
				for (char i = 0; i < size; i++) {
					printf ("%c", str [i]);
				}

				printf ("\n");
			} else {
				printf ("%c%d%c\n", sc, count - 2, ec);
			}
		}
	}

	return 0;
}