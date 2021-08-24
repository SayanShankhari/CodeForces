// Queue at the School

#include <stdio.h>
 
int main () {
	int n, t, i;
	char Q [50];
	char flag = 0;

	scanf ("%d %d", &n, &t);
	getchar ();

	for (i = 0; i < n; i++) {
		Q [i] = getchar ();
	}

	while (t--) {
		for (i = 0; i < n - 1; i++) {
			if (Q [i] == 'B' && Q [i + 1] == 'G') {
				Q [i] = 'G';
				Q [i + 1] = 'B';
				++i;
			}
		}
	}

	for (i = 0; i < n; i++) {
		printf ("%c", Q [i]);
	}

	return 0;
}