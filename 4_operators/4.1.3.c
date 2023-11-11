/* find palindrome numbers between 11 and 999 and print them */
#include <stdio.h>

int main() {
    int cnt = 0;
    int n1, n2, n3;

    for (int i = 11; i <= 99; ++i) {
        n1 = i / 10;
        n2 = i % 10;
        if (n1 == n2) {
            printf("%d ", i);
            cnt++;
            if (cnt%10 == 0)
                printf("\n");
        }
    }
    for (int i = 100; i <= 999; ++i) {
        n1 = i / 100;
        n2 = i % 10;
        if (n1 == n2) {
            printf("%d ", i);
            cnt++;
            if (cnt%10 == 0)
                printf("\n");
        }
    }
    
    return 0;
}
