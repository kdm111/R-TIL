#include <stdio.h>
// 문자열 헤더파일
#include <string.h>
int main(void)
{
    // 끝에 null문자 추가를 위해 하나 더 증가
    // 선언 시 크기를 잡아주게된다.
    char fruit[20] = "apple";
    
    printf("%s %s\n", fruit, "jam");

    strcpy(fruit, "banana");

    printf("%s %s\n", fruit, "jam");
}
