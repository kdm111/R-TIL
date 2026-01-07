#include <stdio.h>


void auto_func(void) {
    int a = 0;
    printf("auto : %d\n", ++a);
}
void static_func(void) {
    // static으로 사용된 변수는 함수가 끝나도 블록 안에서 존재함.
    // 허나 다른 블록에서는 이름을 불러서 사용할 수 없음.
    // 단 해당 변수의 주소값을 불러와서 사용가능함.
    // static 변수는 local scope
    // static 변수는 data 영역에 존재함.
    static int a = 0; 
    printf("auto : %d\n", ++a);
}

void main(void) {
    int i;

    puts("일반 지역 변수 사용(auto) ");
    for (i = 0 ; i < 3; i++) {
        auto_func();
    }
    puts("정적 지역 변수 사용(static) ");
    for (i = 0 ; i < 3; i++) {
        static_func();
    }
}