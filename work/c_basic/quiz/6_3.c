//4_18
#include <stdio.h>

int main(void) {
    int n, i, j;
    n = 10;
    for (i=0; i<n; i++){
        for (j=0; j<n; j++){
            if (i==j) {
                printf("□ ");
            }else{
                printf("■ ");
            }
        }
        printf("\n");
    }
}