#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define DEGREE 5
#define HZ_CNT 5

void print_arr(double **arr, int limit_size);
double *get_avg(double **arr);
void main(void) {
    srand(time(NULL));

    
    double **hz;
    double *sec;

    hz = (double **)malloc(sizeof(double *) * HZ_CNT);
    if (hz == NULL) exit(1);
    // 0 ~ 1까지 실수 * 500.0
    double init = ((double) rand() / RAND_MAX) * 500.00;
    for (int h = 0; h < HZ_CNT; h++) {
        hz[h] = (double *) malloc(sizeof(double) * DEGREE);
        if (hz[h] == NULL) exit(1);
        hz[h][0] = init;
        for (int i = 1; i < DEGREE; i++) {
            double delta = ((double) rand() / RAND_MAX) * 100.00 - 50.00;
            hz[h][i] = hz[h][i-1] + delta;
        }
    }

    char ans[2];
    fputs("출력 하시겠습니까?(y) ", stdout);
    fgets(ans, 2, stdin);
    if (strcmp("y", ans) == 0) {
        print_arr(hz, 5);
    }
    sec = get_avg(hz);
    puts("-----여기는 평균값입니다.-----");
    for (int i = 0; i < DEGREE; i++) {
        printf("%7.2lf", sec[i]);
    }
    puts("");
    /*
    double min_distance = init;
    int min_angle = 0;
    for (int i = 0; i < sizeof(hz) / sizeof(double); i++) {
        if (min_distance > hz[i]) {
            min_distance = hz[i];
            min_angle = i;
        }
    }*/

    //printf("가장 가까운 각도 : %d도 가장 가까운 거리 : %.2lf\n", min_angle, min_distance);
    free(hz);
    free(sec);
}

void print_arr(double **arr, int limit_size) {
    for (int h = 0; h < HZ_CNT; h++) {
        for (int i = 0; i < DEGREE; i++) {
            printf("%7.2lf", arr[h][i]);
            if (i % limit_size == limit_size - 1)
                puts("");
        }
        puts("");
    }
}

double *get_avg(double **arr) {
    double *ret = (double *)malloc(sizeof(double) * DEGREE);
    if (ret == NULL) exit(1);
    int k = 0;

    for (int j = 0; j < DEGREE; j++) {
        double temp = 0;
        for (int i = 0; i < HZ_CNT; i++) {
            temp += arr[i][j];
        }
        ret[k++] = temp / 5;
    }
    return ret;
} 


