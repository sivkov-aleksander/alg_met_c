#include <stdio.h>

int count;

void sum (int x, int y)
{
    printf("sum %d and %d equal %d\n", x, y, x + y);
    count++;
}

void func(void)
{
    int count;
    count = count - 2;
}

int main(void)
{
    int a, b;

    count = 0;
    scanf ("%d", &a);
    scanf ("%d", &b);

    sum (a, b);
    b = b * 3;
    sum(a, b);

    func();
    printf("Function sum was called %d time\n", count);

    return 0;
}
