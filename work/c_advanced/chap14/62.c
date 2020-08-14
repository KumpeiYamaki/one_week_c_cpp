#include <stdio.h>

typedef struct {
    int a;
    double d;
}num_data;

void dealData1(num_data data);
void dealData2(num_data* pData);

void main() {
    num_data n1 = {1, 1.2}, n2 = {1, 1.2};
    printf("n1のアドレス:0x%x n2のアドレス:0x%x\n", (unsigned int)&n1, (unsigned int)&n2);
    dealData1(n1);
    dealData2(&n2);
    printf("n1.a = %d  n1.d = %f\n", n1.a, n1.d);
    printf("n2.a = %d  n2.d = %f\n", n2.a, n2.d);
}

//値渡しの場合、異なるポインタのデータに値がコピーされ、元のデータには変更がかからない
//大量のデータの場合、余計なメモリを食ったりするので原則使わない方が良い
void dealData1(num_data data) {
    printf("a=%d d=%f\n", data.a, data.d);
    printf("dealData1に渡ってきたデータのアドレス:0x%x\n", (unsigned int)&data);
    //値の変更
    data.a = 2;
    data.d = 2.4;
}

void dealData2(num_data* pData) {
    printf("a=%d d=%f\n", pData->a, pData->d);
    printf("dealData2に渡ってきたデータのアドレス:0x%x\n", (unsigned int)pData);
    //値の変更
    pData->a = 2;
    pData->d = 2.4;
}