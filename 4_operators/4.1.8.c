/* find minimum number 2^r that bigger than n */
#include <stdio.h>

int main(int argc, char *argv[]) {
    int n;
    scanf("%d", &n);
    int r = 1;

    while (r <= n) {
        r *= 2;
    }

    printf("%d\n", r);
    return 0;
}
