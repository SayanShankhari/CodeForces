// Hulk

#include <stdio.h>

int main () {
	int n, flag = 0;

	scanf ("%d", &n);

	while (n --) {
		flag = ! flag;
		printf ("I %s %s ", (flag) ? "hate" : "love", (n) ? "that" : "it");
	}

	return 0;
}