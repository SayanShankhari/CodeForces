// Word

#include <stdio.h>
 
int main () {
	char c = 0, A [100], size = 0, flag = 0;

	c = getchar ();

	while (c != '\n') {
		flag += (c < 'a') ? +1 : -1;
		A [size ++] = c;

		c = getchar ();
	}

	flag = (flag > 0) ? 0 : 1;

	for (int i = 0; i < size; i++) {
		if (
			(!flag && A [i] > 'Z')
			|| (flag && A [i] < 'a')
		) {
			c = A [i] ^ ('a' - 'A');
		} else {
			c = A [i];
		}

		printf ("%c", c);
	}

	return 0;
}