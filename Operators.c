#include "stdio.h"

int main(int argc, char const *argv[])
{
    int a;
    int b;

    a = 5;
    b = 6;

    // printf("A + B = %f\n",a+b);
    // printf("A * B = %f\n",a*b);
    // printf("A - B = %f\n",a-b);
    // printf("A / b = %f\n",a/b);

    printf("%d",a==b);

    printf("%d", a == b || a > b);

    return 0;
}
