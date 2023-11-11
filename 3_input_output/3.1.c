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

void f_d() {
    double d; float f; long lng; int i; short s;
    printf("Task 4:\n");
    d = f = lng = i = s = 1000000/3;
    printf("s = %hd i = %d lng = %ld f = %f d = %f\n", s, i, lng, f, d);
    printf("\n");
}


void f_e() {
    double d; float f; long lng; int i; short s;
    printf("Task 5:\n");
    lng = s = d = lng = i =  100/3;
    printf("s = %hd i = %d lng = %ld f = %f d = %f\n", s, i, lng, f, d);
    printf("\n");
}

void f_f() {
    double d; float f; long lng; int i; short s;
    printf("Task 6:\n");
    f = s = d = lng = i = (double) 100/3;
    printf("s = %hd i = %d lng = %ld f = %f d = %f\n", s, i, lng, f, d);
    printf("\n");
}

void f_g() {
    double d; float f; long lng; int i; short s;
    printf("Task 7:\n");
    s = i = lng = f = d = 100/(double)3;
    printf("s = %hd i = %d lng = %ld f = %f d = %f\n", s, i, lng, f, d);
    printf("\n");
}

void f_k() {
    double d; float f; long lng; int i; short s;
    printf("Task 8:\n");
    f = s = d = lng = i = (double)100/3;
    printf("s = %hd i = %d lng = %ld f = %f d = %f\n", s, i, lng, f, d);
    printf("\n");
}

void f_l() {
    double d; float f; long lng; int i; short s;
    printf("Task 9:\n");
    i = s = lng = d = f = (double) (100/3);
    printf("s = %hd i = %d lng = %ld f = %f d = %f\n", s, i, lng, f, d);
    printf("\n");
}


int main() {
    f_a();
    f_b();
    f_c();
    f_d();
    f_e();
    f_f();
    f_g();
    f_k();
    f_l();
    return 0;
}
