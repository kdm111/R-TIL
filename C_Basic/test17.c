#include <stdio.h>

int main(void)
{
    int a = 10;
    double b = 3.4;

    printf("sizeof int : %lu\n", sizeof(a));
    printf("sizeof double : %lu\n", sizeof(b));
    printf("sizeof static int : %lu\n", sizeof(10));
    printf("sizeof double result : %lu\n", sizeof(1.0 + 2.0));
    printf("size char : %lu\n", sizeof(char));
}