#include <stdio.h>

void my_gets(char *str, int size) {
    int ch = -1;
    int i = 0;
    printf("문자열 입력 : ");
    while (i < size -1) {
        ch = getchar();
        if (ch != '\n') str[i++] = ch;
        else break;
    }
    str[i] = '\0';
    while (ch != '\n' && ch != EOF) ch = getchar();
}

int main(void) {
    // ascii
    /*
    char small, cap = 'G';
    if ((cap >='A') && (cap <= 'Z')) {
        small = cap + 'a' - 'A';
    }
    printf("cap : %c, small : %c", cap, small);
    */

/*
    char ch1, ch2;
    scanf("\n%c%c", &ch1, &ch2); // scanf는 '\n' 이나 ' ' 역시 모두 입력 받는다.
    printf("[%d %d]\n",ch1,ch2);
*/
/*
    int ch;

    ch = getchar(); // 함수가 반환하는 문자 바로 저장
    printf("input ch : ");
    putchar(ch); // 입력한 문자 출력
    putchar('\n');
*/
/*
    scanf가문자를 입력하는 과정
    n번반복
        scanf("%c", &c)
        printf("%c", c)
    키보드 입력 > 버퍼에 입력 -> 엔터입력시 버퍼완료 후 전송
    -> 
*/

/*    char ch;
    int i;

    for (i = 0; i < 3; i++) {
        scanf("%c", &ch); // %c는 모든 문자를 읽음. \t, \n, \0 모두 읽어냄
        printf("%c", ch);
    }
    for (i = 0; i < 3; i++) {
        scanf("%c", &ch);
        printf("%c", ch);
    }
    printf("%d", ch);
*/

    char str[7];

    my_gets(str,sizeof(str));
    printf("str : %s\n", str);
    my_gets(str,sizeof(str));
    printf("str : %s\n", str);

    return 0;
}