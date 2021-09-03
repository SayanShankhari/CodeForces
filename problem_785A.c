// Anton and Polyhedrons

#include <stdio.h>

int main () {
	int n, count = 0;
	char c, str[12];

	scanf ("%d", &n);
	c = getchar ();

	while (n --) {
		c = getchar ();

		switch (c) {
			case 'T':
				count += 4;
				break;
			case 'C':
				count += 6;
				break;
			case 'O':
				count += 8;
				break;
			case 'D':
				count += 12;
				break;
			case 'I':
				count += 20;
				break;
		default:
			break;
		}

		gets (str);
	}

	printf ("%d", count);

	return 0;
}