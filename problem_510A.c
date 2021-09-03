// Fox And Snake

#include <stdio.h>

int main () {
	int i, m, n;
	char flag = 0;

	scanf ("%d %d", &n, &m);

	while (n-- > 0) {
		for (i = 0; i < m; i++) {
			printf ("#");
		}

		if (n > 1) {
			printf ("\n");

			if (flag) {
				printf ("#");
			}

			for (i = 1; i < m; i++) {
				printf (".");
			}

			if (!flag) {
				printf ("#");
			}

			-- n;
			flag = ! flag;

			printf ("\n");
		}		
	}

	return 0;
}