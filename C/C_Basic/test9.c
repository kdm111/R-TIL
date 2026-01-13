#include <stdio.h>


int main(void)
{
    short sh = 32767;
    int in = 2147483647;
    long ln = 2147483647;
    long long lln = 123451234512345;

    // %d short, int
    printf("short %d\n", sh);
    printf("int %d\n", in);

    // %ld long, %lld long long
    printf("long %ld\n", ln);
    printf("long long %lld\n", lln);


    unsigned int a;

    // %u unsigned
    a = 4294967295;
    printf("unsigned int %u\n", a);
    a = -1;
    printf("unsigned int -1 = %u\n", a);

    float ft = 1.23456789;
    double db = 1.234567890;

    printf("%.20f, %.20f", ft, db);
}