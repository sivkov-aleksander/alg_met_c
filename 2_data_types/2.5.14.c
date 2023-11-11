/* change the sigh of int variable */
#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);

    x = x ^ ~(0);

    x += 1;
    printf("%d\n", x);

    return 0;
}
