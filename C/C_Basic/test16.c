#include <stdio.h>

int main(void)
{
    int a = 20,  b = 3;
    double res;


    res = ((double)a / (double)b);
    printf("a = %d, b = %d\n", a, b);
    printf("a / b = %.9lf\n", res);

    a = (int)res;
    printf("a = %d, b = %d, res = %.3lf\n", a, b, res);
}

