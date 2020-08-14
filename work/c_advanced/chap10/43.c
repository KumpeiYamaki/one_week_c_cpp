#include <stdio.h>

void main() {
    unsigned char i = 0xf;  // 00001111
    unsigned char j = 0xff; // 11111111
    printf("%x << 1 = %x\n", i, i<<1);  // 左シフト: 00011110
    printf("%x >> 1 = %x\n", i, i>>1);  // 右シフト: 00000111
    printf("%x | %x = %x\n", i, j, i | j);  // OR: 11111111
    printf("%x & %x = %x\n", i, j, i & j);  // AND: 00001111
    printf("~%x = %x\n", i, (unsigned char)~i);  // NOT: 11110000
}