// Translation

#include <stdio.h>
 
int main () {
	char S [100], size = 0;
	char c, flag;

	c = getchar ();

	while (c != '\n') {
		S [size ++] = c;
		c = getchar ();
	}

	flag = 1;
	c = getchar ();

	while (c != '\n') {
		if (flag && (c != S [-- size])) {
			flag = 0;
		}

		c = getchar ();
	}

	if (flag) {
		printf ("YES");
	} else {
		printf ("NO");
	}

	return 0;
}