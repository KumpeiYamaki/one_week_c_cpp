#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
    int n;
    srand((unsigned)time(NULL));
    n = rand() % 100 + 1;
    printf("%d点\n", n);
    if (n >= 80) {
        printf("優\n");
    }
    else if (n >= 70) {
        printf("良\n");
    }
    else if (n >= 60) {
        printf("可\n");
    }
    else {
        printf("不可\n");
    }
}