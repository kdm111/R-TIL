#include <stdio.h>

int main(void)
{
/*    int a;

    printf("num : ");
    scanf("%d", &a);
    printf("input : %d\n", a);
*/

/*    int age;
    double height;

    printf("input age, height : ");
    scanf("%d %lf", &age, &height);
    printf("age: %d height : %lf", age, height);
*/

    char grade;
    char name[20];

    printf("grade : "); scanf("%c", &grade);
    printf("name : "); scanf("%s", name);
    printf("name : %s, grade : %c\n", name, grade);
}

