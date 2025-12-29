#include <stdio.h>

int main(void)
{
    int a = 10, b = 20;
    int res = 2;

    a += 20;
    res += b + 2;

    printf("%d\n", res); // 24
    int c = 1 == 2 % 2;
    printf("%d\n", c);
}