#include <stdio.h>

void main() {
    int n;
    printf("n=");
    scanf("%d", &n);
    if (10>=n | n>=90) {
        printf("10以下か90以上です\n");
    }
}