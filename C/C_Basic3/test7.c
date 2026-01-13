#include <stdio.h>

/*
    DBL_MAX : 1.79 * 10 ^308 double이 표현하는 가장 큰 수. 음수 가능
    DBL_MIN : 2.22 * 10 ^-308 double이 표현하는 가장 0에 가까운 수. 음수 가능

*/
#include <float.h>

void print_arr(int *pa, int size);
void input_arr(double *pa, int size);
double find_max(double *pa, int size);
void print_month(int *mp, int size);

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
/*
    int arr[5] = {1,2,3,4,5};
    int *pa = arr;
    int *pb = pa-1;
    printf("pa : %10d, pb : %10d\n", *pa, *pb);
    printf("pa : %u, pb : %u\n", pa, pb);
    pa++;
    printf("pb - pa : %u\n", pb - pa); // 두 포인터 사이 데이터의 개수

    if(pa<pb) {printf("pa : %d\n", *pa);} else {printf("pb : %d\n", *pb);};
*/
/*
    int arr1[5] = {1,2,3,4,5};
    int arr2[7] = {1,2,3,4,5,6,7};

    print_arr(arr1, sizeof(arr1) / sizeof(arr1[0]));
    printf("\n");
    print_arr(arr2, sizeof(arr2) / sizeof(arr2[0]));
*/

/*    double arr[5];
    double max;
    int size = sizeof(arr) / sizeof(arr[0]);
    
    input_arr(arr, size);
    max = find_max(arr, size);
    printf("max : %.1lf\n", max);
*/

    int month[] = {
        31,28,31,30,31,
        30,31,31,30,31,
        30,31,1,2,3,
        4,5,6,7,8,
        9,10,NULL
    };
    print_month(month, sizeof(month) / sizeof(month[0]));   
}

// 4 9 14 
void print_month(int *mp, int size) {
    int i;

    /*for (i = 0; i < size; i++) {
        printf("%5d", *(mp + i));
        if ((i - 4) % 5 == 0) printf("\n");
    }*/
    i = 0;
    while (*(mp + i)) {
        printf("%5d", *(mp + i));
        if (i % 5 == 4) printf("\n");
        i++;
    }
    printf("\n");
}
void print_arr(int *pa, int size) {
    int i;

    for (i = 0; i < size; i++) {
        printf("%d ", pa[i]);
    }
}

void input_arr(double *pa, int size) {
    int i;

    for (i = 0; i < size; i++) {
        scanf("%lf", pa + i);
    }
}
double find_max(double *pa, int size) {
    double max = *pa;
    int i;
    printf("find_max :%.1lf\n", max);
    for (i = 0; i < size; i++) {
        max = max < *(pa + i) ? *(pa + i) : max;
    } 
    return max;
}