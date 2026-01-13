#include <stdio.h>
#include <stdlib.h>

void main(void) {

    /*
    int arr[5];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = arr[0] + arr[1];
    scanf("%d", &arr[3]);
    int i;
    for (i = 0; i < 5; i++) {
        printf("%2d ", i);
    }
    printf("\n");
    for (i = 0; i < 5; i++) {
        printf("%2d ", arr[i]);
    }
    */

/*    int arr2[3] = {0 ,1, 2};
    int i;
    for (i = 0; i < 5; i++) {
        printf("%2d ", i);
    }
    printf("\n");
    for (i = 0; i < 5; i++) {
        printf("%2d ", arr2[i]);
    }
    */

/*    int arr3[] = {0,1,2};
    */

/*    int score[5];
    int i;
    int total = 0;
    double avg = 0;

    for (i = 0; i < 5; i++) {
        scanf("%d", &score[i]);
        printf("arr[%d] = %d\n", i, score[i]);
        total += score[i];
    }
    avg = total / 5;
    printf("평균 : %.1lf\n", avg);
*/

/*    int score[5];
    int i;
    int total = 0;
    double avg;
    int count;

    count = sizeof(score) / sizeof(score[0]);
    printf("count : %d\n", count);
    scanf("%d %d %d %d %d", &score[0], &score[1], &score[2], &score[3], &score[4]);
    for (i = 0; i < count; i++) {
        total += score[i];
    }
    avg = (double) total / count;
    printf("avg : %.1lf\n", avg);
*/

 //   char str[80] = "applejam";

    char str[80] = {'a', 'p', 'p'};
    printf("%d %d %d\n", str[5],str[6],str[7]);
    str[5] = 'j';
    printf("%d %d %d\n", str[5],str[6],str[7]);
    printf("%s\n", str);
/*    printf("old string : %s\n", str);
    printf("new string : ");
    scanf("%s", str);
    printf("new string : %s\n", str);
    printf("%d %d %d\n", str[5],str[6],str[7]);
*/
}

