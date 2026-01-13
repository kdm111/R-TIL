#include <stdio.h>

void main() {
    int a = 10;
    int *pi = &a;
    int **ppi = &pi;

    printf("&a : %x pi : %x *ppi : %x\n", &a, pi, *ppi);
    printf("&pi : %x ppi : %x\n", &pi, ppi);
    printf("&ppi : %x\n", &ppi);

    printf("*ppi : %x pi : %x\n", *ppi, pi);
    printf("**ppi : %d, *pi : %d a : %d\n", **ppi, *pi, a);
}