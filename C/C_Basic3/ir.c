#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_NUM 16

int is_on_the_line(int value, int threshold) {
    return value >= threshold;
}

int get_black_count(int label[], int size) {
    int black_count = 0;
    for (int i = 0; i < size / sizeof(label[0]); i++) {
        if (label[i] == 1) black_count += 1;
    }
    return black_count;
}

double get_index_avg(int label[], int size) {
    int black_count = get_black_count(label, size);

    double temp = -1;
    for (int i = 0; i < size / sizeof(label[0]); i++) {
        temp += i * label[i];
    }
    if (black_count != 0) temp /= black_count;
    return temp;

}
void main(void) {

    int N = 8; // 선언하기 전 미리 최대치로 설정하여 메모리 확보
    int value[8] = {320, 340, 980, 1010, 990, 310, 305, 1000};
    int threshold = 500;
    int label[8] = {};


    int black_count = 0;
    for (int i = 0; i < sizeof(value) / sizeof(value[0]); i++) {
        if (is_on_the_line(value[i], threshold)) {
            label[i] = 1;
        } else {
            label[i] = 0;
        }
    }

    
    double index_avg = get_index_avg(label, sizeof(label));
    printf("label : ");
    for (int i = 0; i < sizeof(label) / sizeof(label[0]); i++) {
        printf("%d ", label[i]);
    }
    printf("\n");
    printf("black_count : %d\n", get_black_count(label, sizeof(label)));
    printf("index_avg : %2lf\n", index_avg);
    
    
    
}