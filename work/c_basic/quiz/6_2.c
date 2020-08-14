//4_14
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int n, i;
    char c[] = "☆";
    srand((unsigned)time(NULL));
    n = rand() % 10 + 1;
    printf("n=%d\n", n);
    if (n%2==0) {
        strcpy(c, "★");
    }
    for (i=0; i<n; i++) {
        printf("%s", c);
    }
    printf("\n");
}