#include <stdio.h>
#include <time.h>

void main(void) {
    /* 
        레지스터 변수
        cpu레지스터 안에 저장되는 변수(현재 컴파일러 향상으로 사용하지 않음)
        주소값이 존재하지 않음. 따라서 포인터 연산 불가.
        레지스터의 크기는 32비트 혹은 64비트로 
        
    */
    register int i;
    int j;
    int sum = 0;
    clock_t start, end;

    start = clock();
    for (i = 0; i < 100000000; i++) {
        sum += i;
    }
    end = clock();
    printf("regitser : %f\n", ((double) end-start) / CLOCKS_PER_SEC);
    sum = 0;

    start = clock();
    for (j = 0; j < 100000000; j++) {
        sum += j;
    }
    end = clock();
    printf("auto : %f\n", ((double)end-start) / CLOCKS_PER_SEC);
}