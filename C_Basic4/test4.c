#include <stdio.h>

int *get_sum(int a, int b);

void main() {
    int *res;


    res = get_sum(10, 20);
    printf("res : %d\n", *res);
    printf("ptr : %p\n", res);
}

int *get_sum(int a, int b) {
    static int res; 
    res = a + b;
    printf("in func ptr : %p\n", &res);
    return &res;
}

