#include <stdio.h>

int main() {
    int x = 10;
    int y = 20;

    /* a) */
    x += y, y += x, y, x;
    printf("x = %d, y = %d\n", x, y);

    /* b) */
    x = 10;
    y = 20;
    y += (x = 1) + (x = 2);
    printf("x = %d, y = %d\n", x, y);

    /* c) */
    x = 10;
    y = 20;
    x += ((y = 1) && (y = 2));
    printf("x = %d, y = %d\n", x, y);

    /* d) */
    x = 10;
    y = 20;
    y %= x / 6;
    printf("x = %d, y = %d\n", x, y);

    /* e) */
    x = 10;
    y = 20;
    x || ++y;
    printf("x = %d, y = %d\n", x, y);

    /* f) */
    x = 10;
    y = 20;
    x ? !x : y;
    printf("x = %d, y = %d\n", x, y);

    return 0;
}
