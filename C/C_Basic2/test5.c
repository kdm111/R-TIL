#include <stdio.h>

int main(void) {
    int i;
/*    for (int i = 2; i < 10; i++) {
        for (int j = 1; j < 10; j++) {
            printf("%d * %d = %2d\n", i, j, i*j);
        }
        if(i < 9) printf("\n");
    }
*/
/*    int i;
    int sum = 0;
    for (i = 1; i <= 10; i++) {
        sum += i;
        if (sum > 30) break;
    }
    printf("sum : %d , last value : %d\n", sum, i);
*/

/*    int sum = 0;
    for (i = 1; i <= 100; i++) {
        if (i % 3 == 0) continue;
        sum += i;
    }
    printf("sum : %d\n", sum);
*/
/*    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            if (i - j == 0 || 6 - j == i) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
*/

    for (int i = -2; i <= 2; i++) {
        for (int j = -2; j <= 2; j++) {
            if (i == j || i == -j) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
    
}