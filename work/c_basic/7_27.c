#include <stdio.h>

void main() {
    double d[3];
    double sum, avg;
    int i;

    d[0] = 1.2;
    d[1] = 3.7;
    d[2] = 4.1;
    sum = 0.0;
    for (i=0; i<3; i++) {
        printf("%f ", d[i]);
        sum += d[i];
    }
    printf("\n");
    avg = sum / 3.0;
    printf("sum: %f\n", sum);
    printf("avg: %f\n", avg);
}