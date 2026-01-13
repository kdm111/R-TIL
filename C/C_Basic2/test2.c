#include <stdio.h>

int main(void)
{
    int a = 21, b = 20;

    if (a > 20)
    {
        printf("a > 20 && ");
        if (b > 20)
        {
            printf("b > 20\n");
        }
        else
        {
            printf("b <= 20\n");
        }
    }
    else
    {
        printf("a <= 20\n");
    }
}