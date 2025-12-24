#include <stdio.h>

int main(void)
{
    int income = 0; // 메모리 주소가 겹쳤을 때를 방지
    double tax;
    // const는 초기값 설정 후 변경 불가
    // define 하기도 함.
    const double tax_rate = 0.12;

    income = 456;
    tax = income * tax_rate;
    printf("%.3f", tax);
}
