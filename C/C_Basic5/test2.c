#include <stdio.h>
#include <stdlib.h>

void main(void) {
    int *pi;
    int size = 5;
    int count = 0;
    int num;
    int i;

    pi = (int *) calloc(size, sizeof(int)); // 메모리를 0으로 초기화
    while (1) {
        printf("양수만 입력 : ");
        scanf("%d", &num);
        if (num <= 0) break;

        if (count == size) {
            size += 5;
            pi  = (int *)realloc(pi, size * sizeof(int)); // 기존 메모리 할당량 증가
        }
        pi[count++] = num;
    }
    for (i = 0; i < count; i++) {
        printf("%5d", pi[i]);
        if (i % 5 == 4) {
            puts("\n");
        }
    }
    free(pi);
}