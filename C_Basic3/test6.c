#include <stdio.h>

int a, b;

void swap(int *pa, int *pb) {
    int temp = *pa;
    *pa = *pb;
    *pb = temp;
}

void swap2(void) {
    int temp;

    temp = *&a;
    //a = b;
    //b = temp;
    *&a = *&b;
    *&b = temp;
}

void main(void) {
    /*
    int a;
    int *pa, *pb;
    pa = pb = &a;

    printf("pa : %u\n", pa);
    printf("pb : %u\n", pb);
    printf("&a : %u\n", &a);
    */

/*    char ch;
    int in;
    double db;

    char *pc = &ch;
    int *pi = &in;
    double *pd = &pd; 

    printf("sizeof ch %d\n", sizeof(&ch));
    printf("sizeof in %d\n", sizeof(&in));
    printf("sizeof db %d\n", sizeof(&db));
    printf("\n");
    printf("sizeof pc %d\n", sizeof(pc));
    printf("sizeof pi %d\n", sizeof(pi));
    printf("sizeof pd %d\n", sizeof(pd));
    printf("\n");
    printf("sizeof *pc %d\n", sizeof(*pc));
    printf("sizeof *pi %d\n", sizeof(*pi));
    printf("sizeof *pd %d\n", sizeof(*pd));
*/
/*
    int a = 10;
    int *p = &a;
    double *pd;

    pd = p; // pd = &(double)a; pd = (int *)&a; 
    printf("*pd = %lf\n", *pd); // double pd는 해당 주소값으로 부터 8바이트를 읽기 때문에 값이 출력되지 않음.
    printf("*p  = %d\n", *p);
*/
    
    // 함수와 메인문의 변수는 변수 공유가 되지 않는다.

/*
    a = 10;
    b = 20;

    //swap(&a, &b);
    swap2();
    printf("result : a, b %d, %d\n", a, b);
*/
    // 임베디드 환경에서는 메모리가 제한되기 때문에 각 자료형의 크기를 사용해야 한다.
    // 작은 임베디드 환경에서 큰 임베디드 환겨을 올릴 수 없다.

}