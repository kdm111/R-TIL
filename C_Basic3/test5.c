#include <stdio.h>
#include <stdlib.h>

void main(void) {
    /*int a;
    double b;
    char c;

    printf("int address : %u\n", &a);
    printf("double address : %u\n", &b);
    printf("char address : %u\n", &c);
    */
   
    // * 포인터 연산자는 절대로 주소값만 들어간다.
/*    int a;
    int *pa;

    pa = &a;
    *pa = 10;
    printf("pa : %d\n", *pa);
    printf(" a : %d\n", a);

    printf("pa : %u\n", pa);
    printf("&a : %u\n", &a);
    */

/*    int a = 10, b = 15, total;
    double avg;
    int *pa, *pb; // 포인터 변수형은 int를 가리킬건데 포인터주소값으로부터 4바이트 만큼의 값을 읽도록한다.
    int *pt = &total; //  포인터 선언과 함께 초기화

    double *pavg = &avg;

    pa = &a; pb = &b;

    *pt = *pa + *pb;
    *pavg = *pt / 2.0;
    printf("*pt : %d\t*pavg : %.2lf\n", *pt, *pavg);

    int a;
    double *pa;
    pa = &a; // 실행되지 않음
*/
    int a = 10, b = 20;
    const int *pa;
    pa = &a;
    a = 20; // 직접참조를 통해 변경가능
    printf("a = 20 : %d\n", *pa);
    //*pa = 30; // 실행되지 않음. 간접참조를 통한 값 변경은 허용되지 않음.
    printf("*a = 30 : %d\n", *pa);
    pa = &b; // 참조값 변경은 가능하다.
    printf("pa = &b : %d\n", *pa);

    // 포인터는 메모리를 사용하는 또 다른 방법 이다.
    // 포인터의 주소값을 참조하거나 
    // * : 간접 참조 연산자
    // & : 주소 연산자
}