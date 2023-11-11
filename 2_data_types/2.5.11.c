/* "Unpack" 32-bits unsigned number in to 4 chars */
#include <stdio.h>

int main() {
    unsigned int x;
    scanf("%u", &x);
    
    char ch1, ch2, ch3, ch4;
    ch1 = (char) x;
    ch2 = (char) (x >> 8);
    ch3 = (char) (x >> 16);
    ch4 = (char) (x >> 24);
    printf("%c %c %c %c\n", ch1, ch2, ch3, ch4);
    
    return 0;
}
