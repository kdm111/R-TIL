#include <stdio.h>
#include <string.h>



int get_row_sum(int *arr, int r);
int get_col_sum(int arr[][6], int size);
int get_total_sum(int arr[][6]);
void main(void) {
    /*char *p[5];

    int i;

    p[0] = "1";
    p[1] = "2";
    p[2] = "3";
    p[3] = "4";
    p[4] = "5";

    for (i = 0 ; i < 5; i++) {
        //printf("%d행 : %s\n",i, p[i]);
        //puts(p[i]);
        fputs(p[i], stdout);
    }*/

/*
    int arr1[] = {1,2,3,4};
    int arr2[] = {1,2,3,4};
    int arr3[] = {1,2,3,4};
    int *arr[] = {arr1, arr2, arr3};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 16 / sizeof(arr[i][0]); j++) {
            printf("%4d", arr[i][j]);
        }
        printf("\n");
    }
*/

    int arr[5][6];

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        for (int j = 0; j < sizeof(arr[0])/ sizeof(arr[0][0]); j++) {
            if(i != sizeof(arr) / sizeof(arr[0]) - 1 
                && j != sizeof(arr[0])/ sizeof(arr[0][0]) - 1
            ) 
                arr[i][j] = 5 * i + j + 1;
            else {
                arr[i][j] = 0;
            }
        }
    }

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        for (int j = 0; j < sizeof(arr[0])/ sizeof(arr[0][0]); j++) {
            if(i == sizeof(arr) / sizeof(arr[0]) - 1 
                && j == sizeof(arr[0])/ sizeof(arr[0][0]) - 1
            ) {
                arr[i][j] = get_total_sum(arr);
            } else if (j == sizeof(arr[0])/ sizeof(arr[0][0]) - 1) {
                arr[i][j] = get_row_sum(arr[i], 6);
            } else if (i == sizeof(arr) / sizeof(arr[0]) - 1) {
                arr[i][j] = get_col_sum(arr, j);
            }
        }
    } 

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        for (int j = 0; j < sizeof(arr[0])/ sizeof(arr[0][0]); j++)
            printf("%10d", arr[i][j]);
        puts("");
    }
}

int get_row_sum(int *arr, int size) {
    int temp = 0;
    for (int i = 0; i < size; i++) {
        temp += arr[i];
    }
    return temp;
}

int get_col_sum(int arr[][6], int size) {
    int temp = 0;
    for (int i = 0; i < 5; i++) {
        temp += arr[i][size];
    }
    return temp;
}

int get_total_sum(int arr[][6]) {
    int temp = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 6; j++) {
            if (i != 4 && j != 5) {
                temp += arr[i][j];
            }
        }
    }
    return temp;
}


