#include <stdio.h>
#include <stdlib.h>

void main() {
    int *pi;
    double *pd;


    pi = (int *)malloc(sizeof(int));
    // 메모리 할당을 받지 못함. 주소값을 받지 못함. 시스템 오류 종료.
    if (pi == NULL) {
        puts("메모리 부족 시스템 종료");
        exit(1); // 0 정상 종료 , 1 비정상 종료. 열려 있는 함수,버퍼를 닫고 안전하게 종료.
    }
    printf("정수 입력 : ");
    scanf("%d", pi);
    printf("입력된 정수 : %d\n" , *pi);

    // 필수 
    // 동적 할당된 메모리는 초기화 되지 않으므로 
    free(pi); 

    pd = (double *)malloc(sizeof(double));
    fputs("실수 입력 : ", stdout);
    scanf("%lf", pd);
    printf("입력된 실수 : %.2lf\n", *pd);

    free(pd);

    // malloc의 리턴값은 지워지면 다시 찾을 수 없음.
}