#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(void) {
    char temp[80];
    char *str[3];
    int i;

    for (i = 0; i < 3; i++) {
        fputs("문자열을 입력하세요 : ", stdout);
        scanf("%s", temp);
        //getchar();
        //gets(temp);
        //fgets(temp, 80, stdin);

        str[i] = (char *)malloc(sizeof(char) * strlen(temp) + 1);
        
        strcpy(str[i], temp);
        //str[i][strlen(str[i])-1] = '\0';
    }

    for (i = 0; i < 3; i++) {
        puts(str[i]);
    }
}