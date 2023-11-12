/* Print first n Fibonachi numbers */
#include <stdio.h>

int main(int argc, char *argv[]) {
    int n, tmp;
    scanf("%d", &n);
    int fib1 = 1, fib2 = 1;
    int cnt = 2;
    printf("%d %d ", fib1, fib2);
    while (cnt <= n) {
        tmp = fib2;
        fib2 = fib1 + fib2;
        fib1 = tmp;
        printf("%d ", fib2);
        cnt++;
        if (cnt%10 == 0)
            printf("\n");
    }
    return 0;
}
