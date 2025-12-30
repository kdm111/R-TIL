#include <stdio.h>
#include <math.h>

//int sum(int x, int y);

int sum(int x, int y) {
    return x + y;
}
double avg(int x, int y) {
    return (x+y) / 2;
}
double rad_to_deg(double rad) {
    return rad * 180.0 / acos(-1.0);
}
double deg_to_rad(int deg) {
    return deg * acos(-1.0) / 180.0;
}
int get_num(void) {
    printf("get_num : ");
    int num;
    scanf("%d", &num);
    return num;
}

void main(void) {
    int a, b;

/*    printf("input a : ");
    scanf("%d", &a);
    printf("input b : ");
    scanf("%d", &b);
    double result = avg(a,b);
    printf("avg : %.2lf\n", result);
*/

/*    int deg;
    double rad;

    printf("deg : ");
    scanf("%d", &deg);
    printf("deg to rad : %.2lf\n", deg_to_rad(deg));

    printf("rad : ");
    scanf("%lf", &rad);
    printf("rad to deg : %.2lf\n", rad_to_deg(rad));
*/

/*    int result1 = get_num();
    printf("input num : %d\n", result1);
    int result2 = get_num();
    printf("input num : %d\n", result2);
*/


}

// int sum(int x, int y) {
//     return x + y;
// }
