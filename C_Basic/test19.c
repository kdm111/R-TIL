#include <stdio.h>

int main(void)
{
    int a = 10, b = 20;
    int res = !(a <= b) ? a : b;

    printf("res : %d\n", res);
}