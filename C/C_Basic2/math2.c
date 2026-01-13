#include <stdio.h>
#include <math.h>

int main(void) {
    double x, y;

    printf("x : ");
    scanf("%lf", &x);
    printf("y : ");
    scanf("%lf", &y);

    printf("----math.h----\n");
    printf("sqrt(x) : %.3lf\n", sqrt(x));
    printf("pow(x, y) : %.3lf\n", pow(x,y));
    printf("sin(x) : %.3lf\n", sin(x));
    printf("cos(x) : %.3lf\n", cos(x));
    printf("log(x) : %.3lf\n", log(x));
    printf("fabs(x) : %.3lf\n", fabs(x));

    printf("atan(x) : %.3lf\n", atan(1.7));
    // 등판 경사각은 %(tan(degree))로 표현을 많이 합니다.
}