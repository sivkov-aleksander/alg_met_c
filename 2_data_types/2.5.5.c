/* using of ? operator*/
#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);
    printf("Mod of x: %d\n", (x > 0) ? x: -1 * x);

    int a, b;
    scanf("%d %d", &a, &b);
    printf("Max of %d and %d is: %d\n", a, b, (a > b) ? a: b);
    
    int k, l, m;
    scanf("%d %d %d", &k, &l, &m);
    int mx = (k > l) ? ((k > m) ? k: m) : ((l > m) ? l: m);
    printf("Max of %d %d %d is: %d\n", k, l, m, mx);
    return 0;

}
