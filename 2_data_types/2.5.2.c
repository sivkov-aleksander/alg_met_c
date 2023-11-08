/* Integer variable k = sum of numbers of x. Where x is third.*/
#include <stdio.h>

int main(int argc, char * argv[]) {
    int x, k;
    scanf("%d", &x);
    k = x / 100 + (x % 100) / 10 + x % 10;
    printf("%d\n", k);
    return 0;
}

