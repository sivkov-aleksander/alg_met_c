/* Count numbers between (111 <= n <= 999) which contain the two same number */
#include <stdio.h>

int main() {
    int cnt = 0;
    int n1, n2, n3;

    for (int i = 100; i <= 999; i++) {
        n1 = i / 100;
        n2 = (i%100) / 10;
        n3 = i%10;
        if ((n1 == n2 && n1 != n3) || (n1 == n3 && n1 != n2) || (n2 == n3 && n2 != n1))
            cnt += 1;
    }

    printf("%d\n", cnt);
    return 0;
}
