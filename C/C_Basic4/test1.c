#include <stdio.h>

int a; // 전역변수, 전역변수는 강제 0으로 초기화
void assign(void) {

    int a; // 함수 종료 시 소멸

    a = 10;
}
void assign2(void) {
    a = 20;
}
void main(void) {
/*
    // auto 지역변수 선언
    // auto c++ 타입 추론
    int a = 0;
    assign();
    printf("%d\n", a);
*/

    // 같은 이름의 변수가 둘 이상이면 가장 가까운 변수를 사용한다.
    printf("%d\n", a);
    assign2();
    printf("%d\n", a);
}