#include <stdio.h>
#include <math.h>

int main(void) {
    double r,w,eL,eR,L;
    //printf("r(m), w(m), eL(%), eR(%), L(m)\n");
    //scanf("%lf %lf %lf %lf %lf", &r,&w,&eL,&eR,&L);
    r = 0.50; w = 0.30; eL = 0.00; eR = 0.005; L = 2.0;
    eL /= 100.0; eR /= 100.0;
    double rL = r * (1 + eL), rR = r * (1 + eR);
    //double dL = 2 * acos(-1.0) * rL * (L / 2 * acos(-1.0) * rL);
    double dL = 2 * acos(-1.0) * rL * 1;
    //double dR = 2 * acos(-1.0) * rR * (L / 2 * acos(-1.0) * rR);
    double dR = 2 * acos(-1.0) * rR * 1;
    double Rc = w / 2 * (dL + dR) / (dR - dL);
    printf("Rc : %lf\n", Rc);
    double delta_rad = L / Rc;
    double delta_deg = delta_rad * 180.0 / acos(-1.0);
    printf("delta_deg : %lf\n", delta_deg);
    double distance = Rc * (1.0 - cos(delta_deg));
    printf("distance : %lf", distance);
    
}