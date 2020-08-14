#include <stdio.h>

void main() {
    int a;  //変数の宣言
    int b = 3;  //宣言&初期化
    int add, sub;   //複数の変数を宣言
    double avg; //倍精度
    a = 6;  //初期化(しないと下でエラーになる)
    add = a + b;
    sub = a - b;
    avg = (a + b) / 2.0;
    printf("%d + %d = %d\n", a, b, add);
    printf("%d - %d = %d\n", a, b, sub);
    printf("avg of %d and %d: %f\n", a, b, avg);
}