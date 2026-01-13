#include <stdio.h>
#include <string.h>

void my_strcpy(char *str1, char *str2);
void my_strcat(char *str1, char *str2);
void my_strncat(char *str1, char *str2, int n);
int my_strlen(char * str);
int my_strcmp(char *str1, char *str2);
int my_strncmp(char *str1, char *str2, int n);

void main(void) {
/*  strcpy
    char str1[80] = "strawberry";
    char str2[80] = "apple";
    char *ps1 = "banana"; // 문자열 상수
    char *ps2 = str2;

    fputs("str1 : ", stdout);
    puts(str1);
    puts("strcpy(str1, str2)");
    strcpy(str1, str2);
    fputs("str1 : ", stdout);
    puts(str1);
*/
/*  strncpy
    char str[20] = "mango tree";
    strncpy(str, "apple-pie", 5);
    printf("str : %s\n", str);
*/
/*  strcat 
    char str[80] = "straw";
    strcat(str, "berry");
    puts(str);
    strncat(str, " pie ", 4);
    puts(str);
*/
/* strlen */
/*    char str1[80], str2[80];
    char *resp;

    fputs("두 개의 과일 이름 ", stdout);
    
    //scanf("%s%s", str1, str2);
    gets(str1, str2); // \n으로 구분하여 입력 됨. 버퍼에 
    printf("strlen1 : %d, strlen2 : %d\n", strlen2(str1), strlen2(str2));
    printf("strlen1 : %s, strlen2 : %d\n", str1, *str2);
*/

/*
    char str1[80] = "pear";
    char str2[80] = "peach";

    int res = strcmp(str1, str2);
    printf("res : %d ==  r - c : %d\n", res, 'r' - 'c'); // 15
    //strcmp 는 해당 글자의 ascii 차를 반환. == 사전순으로 더 뒤에 존재
    // 
*/

    char init[10] = {'\0'};
    char amazon[80] = "amazon";
    char *adobe = "adobe";
    char meta[80] = "meta";
    char *apple = "apple";
    char *nvidia = "nvidia";
    

    puts("----my_strlen----");
    printf("init : %d, amazon : %d, adobe : %d\n", 
        my_strlen(init), my_strlen(amazon), my_strlen(adobe)
    );

    puts("----my_strcpy----");
    my_strcpy(amazon, adobe);
    printf("amazon : %s\n", amazon);

    puts("----my_strcat----");
    my_strcat(meta, apple);
    printf("meta : %s\n", meta);

    puts("----my_strncat(4)----");
    my_strncat(init, apple, 4);
    printf("init : %s\n", init);

    puts("----my_strcmp----");
    printf("my_strcmp : %d\n", my_strcmp("app", "app"));

    puts("----my_strncmp(2)----");
    printf("my_strncmp(2) : %d\n", my_strncmp(apple, adobe, 2));
    
}


void my_strcpy(char *str1, char *str2) {
    while (*str2)
        *str1++ = *str2++;
    *str1 = '\0';
}
void my_strcat(char *str1, char *str2) {
    while (*str1) str1++;
    while (*str2)
        *str1++ = *str2++;
    *str1 = '\0';
}
void my_strncat(char *str1, char *str2, int n) {
    while (*str1) str1++;
    while (n-- > 0 && *str2)
        *str1++ = *str2++;
    *str1 = '\0';
}

int my_strlen(char * str) {
    int i = 0;

    while (*str++) i++;
    return i;
}
int my_strcmp(char *str1, char *str2) {
    while (*str1 == *str2 && *str1) {
        str1++; str2++;
    }
    if (*str1 == *str2) {return 0;}
    else {return *str1 > *str2 ? 1 : -1;}
}

int my_strncmp(char *str1, char *str2, int n) {
    if (n == 0) return 0;

    while (n-- > 0 && (*str1 == *str2) && *str1) {
        str1++; str2++;
    }
    if (*str1 == *str2) {return 0;}
    else {return *str1 > *str2 ? 1 : -1;}
}

