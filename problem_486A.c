// Calculating Function

#include <stdio.h>

int main () {
	char c = 0, N [16], D [16], flag;
	int i, n = 0, r = 0, size = 0, size2 = 0;

	c = getchar ();

	while (c != '\n') {
		N [size ++] = c;
		c = getchar ();
	}

	c = N [size - 1];

	if (
		c == '0'
		|| c == '2'
		|| c == '4'
		|| c == '6'
		|| c == '8'
	) {
		flag = 0;
	} else {
		flag = 1;
	}

	if (flag) {
		c = 1;

		for (i = size - 1; i >= 0; i--) {
			if (c) {
				if (N [i] + c > '9') {
					D [size2 ++] = '0';
				} else {
					D [size2 ++] = N [i] + c;
					c = 0;
				}
			} else {
				D [size2 ++] = N [i];
			}
		}

		if (c) {
			D [size2 ++] = '1';
		}

		size = 0;

		while (size2) {
			N [size ++] = D [-- size2];
		}
	}

	/* for (i = 0; i < size; i++) {
		printf ("%c", N [i]);
	} */

	for (i = 0; i < size; i++) {
		n = 10 * r + (N [i] - '0');
		r = n % 2;
		D [size2 ++] = '0' + (n / 2);
	}

	if (flag) {
		printf ("-");
	}

	i = 0;

	while (D [i] == '0' && i < size2 - 1) {
		++i;
	}

	while (i < size2) {
		printf ("%c", D [i ++]);
	}

	return 0;
}