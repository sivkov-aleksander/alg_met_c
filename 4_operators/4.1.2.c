/* Count numbers between (102 <= n <= 987) which numbers is different */
#include <stdio.h>

int main() {
    int cnt = 0;
    int n1, n2, n3;

    for (int i = 102; i <= 987; i++) {
        n1 = i / 100;
        n2 = (i%100) / 10;
        n3 = i%10;
        if (n1 != n2 && n1 != n3 && n2 != n3)
            cnt += 1;
    }

    printf("%d\n", cnt);
    return 0;
}
