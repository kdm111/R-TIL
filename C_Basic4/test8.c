#include <stdio.h>

void swap(char **pa, char **pb);
void main() {
    char *pa = "apple";
    char *pb = "banana";

    printf("pa : %s pb : %s\n", pa, pb);
    swap(&pa, &pb);
    printf("pa : %s pb : %s\n", pa, pb);
}

void swap(char **pa, char **pb) {
    char *temp = *pa;
    *pa = *pb;
    *pb = temp;
}

