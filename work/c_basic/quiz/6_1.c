#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
    int n, i;
    srand((unsigned)time(NULL));
    n = rand() % 10 + 1;
    printf("n=%d\n", n);
    for (i=0; i<n; i++) {
        printf("■");
    }

    // whileで
    // i=0;
    // while (i<n) {
    //     printf("■");
    //     i++;
    // }

    //do~whileで
    // i=0;
    // do {
    //     printf("■");
    //     i++;
    // }while (i<n);
    printf("\n");
}