/* Find all deliminator for n number */
#include <stdio.h>

int main() {
    int n;
    int cnt = 0;
    scanf("%d", &n);

    int x = 1;
    while (x <= n) {
        if (n%x == 0) {
            printf("%d ", x);
            cnt++;
            if (cnt%10 == 0)
                printf("\n");
        }
        x++;
   }

    printf("\n");

    return 0;
}

