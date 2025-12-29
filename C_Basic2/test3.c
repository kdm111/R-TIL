#include <stdio.h>

int main(void)
{
    int rank = 2, result = 0;

    switch (rank)
    {
        case 1:
            result = 100;
            break ;
        case 2:
            result = 200;
            break ;
        case 3:
            result = 300;
            break ;
        default:
            result = -1;
            break ;
    }
    printf("result : %d\n", result);
}