/* invert 5 lower bits of digit x */
#include <stdio.h>

int main() {
    unsigned int x;
    scanf("%u", &x);

    x = x ^ (31);
    printf("%u\n", x);

    return 0;
}
