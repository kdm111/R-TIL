#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


void print_velocity(int *arr, int l) {
    printf("       input velocity \n");
    for (int i = 1; i < l / sizeof(arr[0]); i++) {
        printf("%2d ", arr[i]);
        if (i > 0 && i % 9 == 0) printf("\n");
    }
    printf("\n");
}

void main(void) {

    srand(time(NULL));

    int v[100];
    int acc_v;
    int i, j;
    int sud_acc = 0, sud_brk = 0;
    int c;
    int f;
    for (i = 0; i < sizeof(v) / sizeof(v[0]); i++) {
        //scanf("%d", &v[i]);
        //v[i] = rand() % 51;    
    }

    v[0] = rand() % 31; // 초기 속도 설정
    i = 1;
    f = 0; // 추세 일반 설정(0)
    while (i < sizeof(v) / sizeof(v[0])) {
        // 다음 속도 확인
        int next_val = rand() % 31;
        // 추세 확인
        // 감속구간(-1), 가속구간(+1), 일반(0)
        // 기존 추세가 일반 혹은 감속구간 이었다가 가속해야할 경우 가속 설정
        if (f <= 0 && next_val >  v[i-1]) {printf("%3d %s\n", i, "추세 가속"); f = 1;}
        // 기존 추세가 일반 혹은 가속 구간 이었다가 감속해야할 경우 감속 설정
        else if (f >= 0 && next_val <  v[i-1]) {printf("%3d %s\n", i, "추세 감속"); f = -1;};
        // 추세 변경 시 같은 추세로 최소 10번 진행
        if (f != 0) {
            for (j = 0; j < 10 && i < sizeof(v) / sizeof(v[0]); j++) {
                next_val = v[i-1] + f * (rand() % 3 + 1);
                if (next_val <= 0) { break;}
                v[i] = next_val;
                i++;
            }
        }
        // 추세 변경 없을 시 다음 값 삽입
        else {
            v[i] = next_val;
            i++;
        }
    }
    print_velocity(v, sizeof(v));
    for (i = 1; i < sizeof(v) / sizeof(v[0]); i++) {
        acc_v = v[i] - v[i-1];
        if (acc_v >= 10) sud_acc++;
        if (acc_v <= -10) sud_brk++;
    }

    printf("급가속 : %d | 급제동 : %d\n", sud_acc, sud_brk);
}

// 
