#include <stdio.h>

int main(void) {
    int a = 1;

    while (a < 10) {
        a <<= 1;
    }

    int b = 1;
    for (int i = 0; i < 3; i++) {
        b += 1;
    }
    

    int c = 1;
    do {
        c *= 2;
    } while(c < 1);

    printf("a : %d, b : %d, c : %d\n", a, b, c);
    return 0;
}