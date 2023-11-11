/* What would be printed? */

#include <stdio.h>

void f_a() {
    double d; float f; long lng; int i; short s;
    printf("Task 1:\n");
    s = i = lng = f = d = 100/3;
    printf("s = %hd i = %d lng = %ld f = %f d = %f\n", s, i, lng, f, d);
    printf("\n");
}

void f_b() {
    double d; float f; long lng; int i; short s;
    printf("Task 2:\n");
    d = f = lng = i = s = 100/3;
    printf("s = %hd i = %d lng = %ld f = %f d = %f\n", s, i, lng, f, d);
    printf("\n");
}

void f_c() {
    double d; float f; long lng; int i; short s;
    printf("Task 3:\n");
    s = i = lng = f = d = 1000000/3;
    printf("s = %hd i = %d lng = %ld f = %f d = %f\n", s, i, lng, f, d);
    printf("\n");
}


int main() {
    f_a();
    f_b();
    f_c();
/*    f_d();
    f_e();
    f_f();
    f_g();
    f_k();
    f_l();
  */  return 0;
}
