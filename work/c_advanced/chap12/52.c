#include <stdio.h>
#include <stdlib.h>

#define SIZE 3

void main() {
    int* p1 = NULL;
    double *p2 = NULL;
    int i;

    // 配列の生成
    // malloc: 指定されたバイト数だけメモリを確保する
    p1 = (int*)malloc(sizeof(int)*SIZE);
    p2 = (double*)malloc(sizeof(double)*SIZE);

    for (i=0; i<SIZE; i++) {
        p1[i] = i;
        p2[i] = i / 10.0;
    }

    for (i=0; i<SIZE; i++) {
        printf("p1[%d]=%d  p2[%d]=%f\n", i, p1[i], i, p2[i]);
    }

    // mallocで確保したメモリの開放(ヒープ領域に確保したメモリは自動開放されない)
    free(p1);
    free(p2);
}