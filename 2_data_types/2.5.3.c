/* Integer variable k = first number of floating point variable */
#include <stdio.h>

int main(int argc, char *argv[]){
    int k;
    double f;
    scanf("%lf", &f);
    k = ((int) (f * 10)) % 10;
    printf("k = %d\n", k);
    return 0;
}
