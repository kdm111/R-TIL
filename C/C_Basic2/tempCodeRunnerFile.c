#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    //char name[20];
    int wheel_numbers;
    int mass;
    double safety_factor;
    double design_margin;
} Vehicle;

Vehicle create_vihicle() {

    
    printf("구동 바퀴 수 : ");
    int wheel_numbers = 0;
    scanf("%d", &wheel_numbers);

    printf("총 하중(kg) : ");
    int m = 0;
    scanf("%d", &m);

    printf("안전계수 : ");
    double safety_factor = 0;
    scanf("%lf", &safety_factor);

    printf("설계마진 : ");
    double design_margin = 0;
    scanf("%lf", &design_margin);

    Vehicle vehicle = {wheel_numbers, m, safety_factor, design_margin};
    return vehicle;
}


typedef struct {
    //char name[20];
    double radius;
    double torque;
    int g;
} Motor;

Motor create_motor() {

    printf("바퀴 반지름 : ");
    double radius = 0;
    scanf("%lf", &radius);

    printf("토크 : ");
    double torque = 0;
    scanf("%lf", &torque);

    printf("감속비 : ");
    int g = 0;
    scanf("%d", &g);

    Motor motor = {radius, torque, g};
    return motor;
}

typedef struct {
    double voltage;
    double capacity;
    double battery_ratio;
    double system_efficiency;
} Battery;

Battery create_battery() {

    printf("공칭전압 : ");
    double v = 0;
    scanf("%lf", &v);

    printf("용량 : ");
    double c = 0;
    scanf("%lf", &c);

    printf("예비율 : ");
    double r = 0;
    scanf("%lf", &r);

    printf("시스템 효율 : ");
    double e = 0;
    scanf("%lf", &e);

    Battery battery = {v, c, r, e};
    return battery;
}

typedef struct {
    const double c;
    const double g;
} Constants;

double getWeight(int mass, Constants c) {
    return mass * c.g;
}


void test_vehicle_and_motor(Vehicle v, Motor m, Constants c) {
    printf("필요한 최소 견인력 : ");
    double fmin = 0;
    scanf("%lf", &fmin); 
    double fmotor = m.torque * c.g / m.radius * (double) v.wheel_numbers;

    printf("모터가 낼 수 있는 견인력 : %lf\n", fmotor);
    printf("판정 : %s\n", (fmin <= fmotor) ? "만족" : "불만족(더 큰 모터나 감속비가 필요합니다)");
}

void test_battery(Vehicle v, Motor m, Battery b, Constants c) {
    
}
int main(void) {
    
    // c, g
    Constants c = {0.018, 9.81};

    //Vehicle v = create_vihicle();
    //Motor m = create_motor();
    //Vehicle[] vehicles = malloc()
    //test_vehicle_and_motor(v2, m2, c);

    // 
    Vehicle v2 = {2, 200, 2.0, 1.2};
    Motor m2 = {0.0965, 0.63, 10};
    // voltage, capacity, battery_ratio, system_efficiency
    Battery b = {47.2, 78.4, 0.1, 0.9};

    //Battery b = create_battery();

    printf("평균전류(원하지 않을 경우 0, 8로 초기화) : ");
    double i_load;
    scanf("%lf", &i_load);
    if (!i_load) i_load = 8;

    printf("rpm(원하지 않을 경우 0, 200로 초기화) : ");
    double rpm;
    scanf("%lf", &rpm);
    if (!rpm) rpm = 200;
    double avg_vel = acos(-1.0) * rpm * 0.2;


    double enery_usable = b.voltage * b.capacity * b.system_efficiency * (1-b.battery_ratio);
    double consume_power = 2 * b.voltage * i_load / b.system_efficiency; // motor 2개
    printf("사용 가능 에너지 : %.2lf\n", enery_usable);
    printf("소비 전력 : %.2lf\n", consume_power);
    printf("런타임 : %.2lf\n", enery_usable / consume_power);
    printf("주행거리 : %.2lf", avg_vel * enery_usable / consume_power);
    return 0;
}