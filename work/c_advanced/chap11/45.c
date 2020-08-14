#include <stdio.h>

void main() {
    int a = 100;
    double b = 123.4;
    float c = 123.4f;
    char d = 'a';
    printf("a = %d、size: %lubyte、address: 0x%x\n", a, sizeof(int), &a);
    printf("b = %f、size: %lubyte、address: 0x%x\n", b, sizeof(double), &b);
    printf("c = %f、size: %lubyte、address: 0x%x\n", c, sizeof(float), &c);
    printf("d = %c、size: %lubyte、address: 0x%x\n", d, sizeof(char), &d);
}