#include <stdio.h>

int main(void)
{
    int a = 10;
    int b = 0;

    if (a > 10)
    {
        b = a;
    }
    else if (a > 20)
    {
        b = 20;
    }
    else 
    {
        b = 30;
    }

    printf("a = %d  b = %d\n", a, b);
}