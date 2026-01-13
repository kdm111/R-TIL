#include <stdio.h>

void main() {
    // 2차원  배열에서 열은 생략이 불가능하다.
/*    char animal[5][20];

    int i;
    int count;
    count = sizeof(animal) / sizeof(animal[0]);
    for (i = 0; i < count; i++) {
        scanf("%s", animal[i]);
    }
    for (i = 0; i < count; i++) {
        printf("%d : %s\n", i, animal[i]);
    }
*/
    
    int score[2][3][4] = {
        {{1,2,3,4}, 
         {5,6,7,8},
         {9,10,11,12}
        },
        {{13,14,15,16}, 
         {17,18,19,20},
         {21,22,23,24}
        },
    };

    int i, j, k;
    for (i = 0; i < 2; i++) {
        printf("%d면 \n", i);
        for (j = 0; j < 3; j++) {
            printf("%d행 ", j);
            for (k = 0; k < 4; k++) {
                printf("%3d", score[i][j][k]);
            }
            printf("\n");
        }
    }
    
}