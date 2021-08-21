// Bit++

#include <stdio.h>

int main () {
	int n, x = 0;
	char c;

	scanf ("%d", &n);
	c = getchar ();

	while (n--) {
        c = getchar ();
        c = getchar ();

        if (c == '+') {
            ++ x;
        } else {
            -- x;
        }

        c = getchar ();
        c = getchar ();
	}

	printf ("%d", x);

	return 0;
}