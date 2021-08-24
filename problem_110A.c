// 

#include <stdio.h>
 
int main () {
	char c, count = 0;

	c = getchar ();

	while (c != '\n') {
		if (c == '4' || c == '7') {
			++ count;
		}

		c = getchar ();
	}

	if (count == 4 || count == 7) {
		printf ("YES");
	} else {
		printf ("NO");
	}

	return 0;
}