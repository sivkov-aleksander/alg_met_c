#include <stdio.h>

int main() {
    int a = 5;
    int b = 7;

    int z = (a += 5) * (b -= 3);
    printf("z = (a += 5) * (b -= 3)\n");
    printf("a = %d, b = %d, z = %d\n\n", a, b, z);

    a = 5;
    b = 7;

    z = -- b / (a++ - 3);
    printf("z = -- b / (a++ - 3)\n");
    printf("a = %d, b = %d, z = %d\n\n", a, b, z);

    a = 5;
    b = 7;

    z = (a -= 2) || 47 / (b - 7);
    printf("z = (a -= 2) || 47 / (b - 7)\n");
    printf("a = %d, b = %d, z = %d\n\n", a, b, z);

    a = 5;
    b = 7;

    z = (a *= b) + (b *= a);
    printf("z = (a *= b) + (b *= a)\n");
    printf("a = %d, b = %d, z = %d\n\n", a, b, z);

    return 0;
}
