#include <stdio.h>

void main() {
    int* p = NULL;
    *p = 1; //アドレスを指定しないまま値を代入(エラー)
}