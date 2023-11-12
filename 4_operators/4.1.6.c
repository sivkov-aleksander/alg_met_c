/* Test n == 3^r. */
#include <stdio.h>

int main(int argc, char *argv[]) {
    int n;
    scanf("%d", &n);

    int pw = 1;
    

    while (pw < n) {
        pw *= 3;
    }

    if (pw == n) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }

    return 0;
}
