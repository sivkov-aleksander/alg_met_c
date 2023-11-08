/*revers of three number number*/
#include <stdio.h>

int main() {
    int k, d;
    scanf("%d", &k);
    d = 100 * (k%10) + ((k%100) / 10) * 10 + k / 100;
    printf("%d\n", d);
    return 0;
}
