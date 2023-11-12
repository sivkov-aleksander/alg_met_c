/* Print first n prime numbers */
#include <stdio.h>

int isprime(int x) {
    int cnt_d = 0;
    if (x%2 == 0)
        return 0;
    for (int i = 3; i < x / 2 + 1; i += 2) {
        if (x%i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int n, cnt;
    cnt = 0;
    scanf("%d", &n);

    printf("%4d ", 2);
    cnt++;
    int i = 3;
    while (cnt < n) {
        if (isprime(i)) {
            printf("%4d ", i);
            cnt++;
            if (cnt%10 == 0) {
                printf("\n");
            }
        }
        i += 2;
    }

    printf("\n");
    
    return 0;
}
