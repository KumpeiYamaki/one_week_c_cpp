#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
    int a, b;
    //乱数の初期化
    srand((unsigned)time(NULL));
    //seedが一定の場合
    // srand(0);
    a = rand() % 10 + 1;
    b = rand() % 10 + 1;

    printf("%d + %d = %d\n", a, b, a+b);
}