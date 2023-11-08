/*For integer variable k assign third number from the end of positive number x */
#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);
    int k = (x%1000) / 100;
    printf("%d\n", k);
    return 0;
}
