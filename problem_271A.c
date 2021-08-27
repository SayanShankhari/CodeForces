// Beautiful Year

#include <stdio.h>

int main () {
	int y, x;
	char a, b, c, d, flag = 1;

	scanf ("%d", &y);

	while (flag) {
		++y;

		x = y;

		d = x % 10;
		x /= 10;
		
		c = x % 10;
		x /= 10;

		b = x % 10;
		x /= 10;

		a = x % 10;
		x /= 10;

		if (
			(a != b)
			&& (a != c)
			&& (a != d)
			&& (b != c)
			&& (b != d)
			&& (c != d)
		) {
			flag = 0;
		}
	}

	printf ("%d", y);

	return 0;
}