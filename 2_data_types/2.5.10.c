#include <stdio.h>

int main() {
    char a, b, c, d;
    int i;
    scanf("%c%c%c%c", &a, &b, &c, &d);
    
    int ch1, ch2, ch3, ch4;
    ch1 = ((int) a) << 24;
    ch2 = ((int) b) << 16;
    ch3 = ((int) c) << 8;
    ch4 = (int) d;
    i = ch1 + ch2 + ch3 + ch4;
    printf("%d\n", i);
    
    return 0;
}
