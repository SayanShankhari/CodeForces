// Watermelon even division

#include <stdio.h>

int main () {
	int n;
	char flag = 0;
	scanf ("%d", &n);

	if (n % 2 == 0) {
		for (int i = 2; i < n; i += 2) {
			if ((n - i) % 2 == 0) {
				flag = 1;
				break;
			}
		}
	}

	printf ("%s", (flag == 1) ? "YES" : "NO");

	return 0;
}