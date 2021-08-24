// Bear and Big Brother

#include <stdio.h>

int main () {
    int a, b, y = 0;

    scanf ("%d %d", &a, &b);

    while (a <= b) {
        ++ y;
        a *= 3;
        b *= 2;
    }

    printf ("%d", y);

    return 0;
}