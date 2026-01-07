#include <stdio.h>
#include <string.h>

void main(void) {
/*
    int num, grade;

    printf("학번 입력 : ");
    scanf("%d", &num);
    getchar();
    printf("grade : ");
    grade = getchar();
    printf("number : %d, grade : %c\n", num, grade);
*/
    // 문자열 상수가 주소란 증거
    // 두 주소는 같다.
/*    printf("apple address value : %p\n", "apple");
    printf("apple address value + 1 : %p\n", "apple" + 1);
    printf("first leter : %c\n", *"apple");
    printf("second leter : %c\n", *("apple" + 1));
    printf("third leter : %c\n", "apple"[2]);
*/

/*
    char *dessert = "apple";
    char *dessert2 = "apple";
    char *dessert3 = "apple";

    printf("day1 : %s %p\n", dessert, dessert);
    dessert = "banana";
    printf("day2 : %s %p\n", dessert, dessert);

    printf("dessert1 : %p\n", &dessert);
    printf("dessert2 : %p\n", &dessert2);
    printf("dessert3 : %p\n", &dessert3);
*/
    /*
    %s
    while (*str != '\0') 
        putchar(*str);
        str++;
    */
/*
    char str[80];
    printf("문자열 입력 : "); // apple jam\n
    scanf("%s", str); // scanf입력은 공백을 허용하지 않음. 
    printf("fisrt : %s\n", str); // apple\0
    scanf("%s", str); // 공백으로 구분되어 남아있는 문자가 있다고 판단되어 실행되지 않음
    printf("second : %s\n", str); // jam\0
*/

/*    char str[80];

    printf("공백이 포함된 문자열 : ");
    gets(str); // 공백이 포함된 문자열 삽입 가능 버퍼에는 \n이 들어가지면 배열에서는 \0이 들어간다.
    printf("input : %s\n", str);
    printf("%d\n", *str);
*/

/*    char str[5]; // 끝에 null문자가 들어가야 하기 때문에 예상 사이즈보다 하나 더 크게 작성한다.
    printf("공백이 포함된 문자열 : ");
    fgets(str, sizeof(str), stdin); // fgets는 \n문자가 삽입됨. \0값을 배열에 넣음. 자동으로 배열 끝에 \0이 들어감
    printf("입력된 문자열 길이 : %ld\n", strlen(str));
    str[strlen(str) - 1] = '\0'; // null문자 이전까지 길이를 가져와 -1값에 \0을 넣음 
    printf("입력된 문자열 : %s\n", str);
*/
/*
    int age;
    char name[20];
    int i = 0;

    printf("age : ");
    scanf("%d", &age);

    //1. int ch = getchar();
    //while (ch != '\n' && ch != EOF) ch = getchar();

    //2. scanf("%*c"); 
    // * 읽은 결과값을 메모리에 저장하지 않음.
    // 문자 하나를 읽음.
    printf("name : ");
    gets(name);

    //fgets(name, sizeof(name), stdin);
    printf("name : %s, age : %d\n", name, age);
*/
/*
    char str[80] = "apple juice";
    char *ps = "banana";
    char *ps2; // 초기화하지 않은 포인터변수는 쓰레기 주소값을 가지고 있음.
    puts(str); // 줄바꿈이 자동으로 들어가 출력
    fputs(ps, stdout); // 줄바꿈이 입력에 들어가 있어야 줄바꿈이 들어감
    puts("milk"); // 다음 줄은 당연히 생김
    puts("hello");
    printf("%d\n", sizeof(str)); // 해당 문자열을 위해 예약된 전체 길이
    str[1] = 'r'; // 배열은 값을 변경할 수 있다.
    //ps[0] = 'r'; // 포인터로 선언된 문자열은 변경이 불가능하다.
    printf("str : %s\n", str);
    printf("ps : %s\n", ps);
    //scanf("%s", ps2); // 쓰레기 주소값에 무엇이 들어가 있을지 모르므로 작동하지 않음.
    //printf("ps2 : %s\n", ps2); 당연히 주소값에 들어갈 수 없음.
*/

/*
    char ani[10];
    char why[20];
    printf("animal : ");

    // scanf : white space 까지만 읽고 있음. 그 이후 값들은 버퍼에 저장됨.
    //scanf("%s", ani);

    // 버퍼 끝 엔터값 제거(scanf)
    //getchar(); // 끝 엔터값 제거
    //scanf("%*c"); // 끝에 오는 아무 값을 뽑아 제거함.

    // gets
    // 공백을 포함(fgets와 동일)해서 설정되지만 오버플로우를 일으킴
    // '\n'을 구분하여 문자열에 저장하지 않으므로 끝에 제거할 필요 없음.
    //gets(ani);
    // puts(ani); // 버퍼 오버플로우 확인



    // fgets
    // 공백을 포함(gets와 동일)하기 위해 설정
    // white space가 모두 포함되어 저장됨.
    // 개행까지 모두 포함되어 문자열로 전송됨.
    fgets(ani, sizeof(ani), stdin); 
    ani[strlen(ani)-1] = '\0';

    printf("why : ");
    fgets(why, sizeof(why), stdin);
    why[strlen(why)-1] = '\0';

    //printf("%s is %s\n", ani, why);

    // puts : puts는 개행문자를 자동으로 포함함.
    // 제거 방법 없음.
    //puts(ani);
    //puts(" is ");
    //puts(why);

    // fputs : 개행문자를 포함하지 않음.
    // stdout(모니터), fd(다른 파일) 등으로 출력을 조절할 수 있음.
    fputs(ani, stdout);
    fputs(" is ", stdout);
    fputs(why, stdout);
*/
    
}