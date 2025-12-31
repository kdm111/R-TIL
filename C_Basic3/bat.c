#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void main() {

    srand(time(NULL));

    int arr[10];
    int i;

    for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        //arr[i] = rand() % 101;
        scanf("%d", &arr[i]);
    }
    
    int min_bat = 30;
    int rel_bat = 35;
    int on = 0;
    for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        if (on == 0 && arr[i] <= min_bat) { on = 1; }
        if (on == 1 && arr[i] >= rel_bat) { on = 0; }
        printf("time : %2d(%2d%%) : %s\n", i, arr[i], on == 1 ?" on":"off");
    }
}