#include <stdio.h>

void f_a() {
    double d = 3.2;
    double x;
    int i = 2;
    int y;

    x = (y = d / i) * 2;
    printf("Task1 \n");
    printf("x = %f; y = %d\n", x, y);
}

void f_b() {
    double d = 3.2;
    double x;
    int i = 2;
    int y;

    x = (y = d / i) * 2;
    printf("Task 2\n");
    printf("x = %d; y = %f\n", x, y);

}
void f_c() {
    double d = 3.2;
    double x;
    int i = 2;
    int y;

    y = (x = d / i) * 2;
    printf("Task 3\n");
    printf("x = %f; y = %d\n", x, y);

}
void f_d() {
    double d = 3.2;
    double x;
    int i = 2;
    int y;

    y = d * (x = 2.5 / d);
    printf("Task 4\n");
    printf("x = %f; y = %d\n", x, y);

}
void f_e() {
    double d = 3.2;
    double x;
    int i = 2;
    int y;

    x = d * (y = ((int) 2.9 + 1.1)) / d;
    printf("Task 5\n");
    printf("x = %d; y = %f\n", x, y);

}

int main() {
    f_a();
    f_b();
    f_c();
    f_d();
    f_e();
    return 0;
    }
