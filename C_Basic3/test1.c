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

    int arr2[5] = {0 ,1, 2};
    int i;
    for (i = 0; i < 5; i++) {
        printf("%2d ", i);
    }
    printf("\n");
    for (i = 0; i < 5; i++) {
        printf("%2d ", arr2[i]);
    }

}