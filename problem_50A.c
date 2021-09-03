// Domino piling

#include <stdio.h>

int main () {
	int m, n;

	scanf ("%d %d", &m, &n);

    // there will be exactly floor (m * n / 2) numnber of dominoes
    // as total number of cells is (m * n) and each domino is of (2 * 1) dimensions
	printf ("%d", m * n / 2);

	return 0;
}