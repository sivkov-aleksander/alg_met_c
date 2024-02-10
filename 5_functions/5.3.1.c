#include <stdio.h>

int iscube(int x);
int isprime(int x);
int isthreepow(int x);

int main() {
    int x;
    scanf("%d", &x);
    printf("x = %d\n", x);
    printf("iscube(x) = %d\n", iscube(x));
    printf("isprime(x) = %d\n", isprime(x));
    printf("isthreepow(x) = %d\n", isthreepow(x));
    return 0;
}

int iscube(int x) {
    int d = 1;
    while (d < x) {
        if (d * d == x)
            return 1;
        d += 1;
    }

    return 0;
}

int isprime(int x) {
    return 0;
}

int isthreepow(int x) {
    int d = 3;
    while (d < x / 3 + 1) {
        if (d*3 == x)
            return 1;
        d *= 3;
    }

    return 0;
}
