#include <stdio.h>

void main(void) {
/*    int arr[3];
    int i;

    *arr = 10; // &arr[0] == arr
    *(arr + 1) = *arr + 10;
    scanf("%d", (arr + 2));
    printf("%d %d %d\n", *arr, *(arr + 1), *(arr + 2));
*/

/*    int arr[3];
    int *pa = arr;
    int i;

    *pa = 10; // pa == arr, pa == &arr[0]
    *(pa + 1) = 20;
    pa[2] = pa[0] + pa[1];
    printf("%d %d %d\n", *arr, *(arr + 1), *(arr + 2));
*/
    // 배열 전체의 크기 : sizeof(arr) 12
    // 포인터 자체의 크기 : sizeof(pa) 8

    // 배열은 상수이며 포인터는 변수이다.
    // 배열은 값을 바꿀 수 없지만 포인터는 값 변경이 가능하다.
    // arr++ (x) pa++(o)

/*    int arr[3] = {1,2,3};
    int *pa = arr;
    int i;

    // 4바이트 씩 증가
    for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        printf("%d : %u \n", i, pa++);
    }
    //printf("\n");
    // 최종 12바이트 증가
    printf("3 : %u\n", pa);
*/
    int arr[5] = {1,2,3,4,5};
    int *pa = arr;
    int *pb = pa-1;
    printf("pa : %10d, pb : %10d\n", *pa, *pb);
    printf("pa : %u, pb : %u\n", pa, pb);
    pa++;
    printf("pb - pa : %u\n", pb - pa); // 두 포인터 사이 데이터의 개수

    if(pa<pb) {printf("pa : %d\n", *pa);} else {printf("pb : %d\n", *pb);};
    
}