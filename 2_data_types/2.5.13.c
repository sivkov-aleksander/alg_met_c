#include <stdio.h>

int main() {
    int x, y;
    scanf("%d%d", &x, &y);
    printf("x = %d, y = %d\n", x, y);

    x = x ^ y;
    printf("After first xor x = x ^ y:\n");  
    printf("x = %d, y = %d\n", x, y);

    y = y ^ x;
    printf("After second xor y = y ^ x:\n");
    printf("x = %d, y = %d\n", x, y);
    
    x = x ^ y;
    printf("After third xor x = x ^ y:\n");
    printf("x = %d, y = %d\n", x, y);

    return 0;
}
