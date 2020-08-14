#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){
    int a[6];
    int n, i;
    srand((unsigned)time(NULL));
    for (i=0; i<6; i++){
        n = rand() % 10 + 1;
        a[i] = n;
        printf("a[%d]=%d ", i, a[i]);
    }
    printf("\n");
}