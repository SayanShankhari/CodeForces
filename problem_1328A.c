// I Wanna Be the Guy

#include <stdio.h>

int main () {
	int t, a, b;

	scanf ("%d", &t);

	while (t--) {
		scanf ("%d %d", &a, &b);

		if (a > b) {
			a %= b;
			
			// manual mod operation
			/*while (a > b) {
				a -= b;
			}*/
		}

		printf ("%d\n", (a) ? b - a : 0);
	}

	return 0;
}