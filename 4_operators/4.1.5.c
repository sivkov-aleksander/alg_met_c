/* True or false that cube of sum of number n equal n^2 */
#include <stdio.h>

int sum_of_number(int n);

int main() {
    int x, z;
    scanf("%d", &x);

    z = sum_of_number(x);
    printf("Sum of number of number %d: %d\n", x, z);
    if (z*z*z == x*x)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}

int sum_of_number(int n) {
    int sm = 0;
    while (n > 0) {
        sm += n%10;
        n /= 10;
    }
    return sm;
}
