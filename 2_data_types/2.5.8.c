#include <stdio.h>

int main() {
    unsigned int k, x;

    scanf("%u", &x);

    k = (x%10) * 100 + (x%100) - x%10 + (x % 1000) / 100;
    printf("%d\n", k);
    return 0;
}
