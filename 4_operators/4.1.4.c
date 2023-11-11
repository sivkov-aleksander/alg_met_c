/* count quantity of number if decimal unsigned number x*/
#include <stdio.h>

int main() {
    int cnt = 0;
    unsigned int x;
    scanf("%u", &x);

    while (x > 0) {
        x /= 10;
        cnt++;
    }

    printf("%d\n", cnt);

    return 0;
}
