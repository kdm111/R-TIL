#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

double clip (double x, double min, double max) {
    if (x < min) return min;
    if (x > max) return max;
    return x;
}

int main(void) {
    double m, Tm, Nm, G, eta, r, c, SF;
    //printf("m(kg), Tm(N.m), Nm, G, eta, r, c, SF\n");
    // 8
    //scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &m, &Tm, &Nm, &G, &eta, &r, &c, &SF);

    //m = 20; Tm = 0.2; Nm = 2; G=10; eta=0.8; r = 0.05; c = 0.18; SF = 1.5;
    m = 123; Tm = 8; Nm = 2; G= 4.33; eta=0.8; r = 0.17; c = 0.18; SF = 1.5;
    double total_t = Nm * Tm * G * eta;
    printf("total_t : %lf\n", total_t);
    double avail_f = total_t / r;
    printf("avail_f : %lf\n", avail_f);
    const double g = 9.81;
    double sin_max_theta = clip((avail_f / SF - c*m*g) / m*g, 0.0, 1.0);
    //double sin_max_theta = (avail_f / SF - c*m*g) / m*g;
    printf("sin_max_theta : %lf\n", sin_max_theta);
    double max_theta = asin(sin_max_theta);
    printf("max_theta : %lf\n", max_theta);
    double max_degree = max_theta * 180.0 / acos(-1.0);
    printf("max_degree : %lf\n", max_degree);
    double grade_pct = tan(max_degree) * 100;
    printf("grade_pct : %lf\n", grade_pct);
}