// Tram

#include <stdio.h>
 
int main () {
	int n, a, b, c = 0, max = 0;

	scanf ("%d", &n);

	while (n--) {
		scanf ("%d %d", &a, &b);
		
		c += (b - a);

		if (c > max) {
			max = c;
		}
	}

	printf ("%d", max);

	return 0;
}