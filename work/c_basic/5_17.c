#include <stdio.h>

void main() {
    int a;
    printf("1~6の数値を入力:");
    scanf("%d", &a);
    if (1 <= a && a <= 6) {
        if (a==2 | a==4 | a==6) {
            printf("even\n");
        }else{
            printf("odd\n");
        }
    }else{
        printf("value out of range\n");
    }
}