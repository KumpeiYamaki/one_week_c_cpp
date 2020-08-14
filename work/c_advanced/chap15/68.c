#include <stdio.h>
#include <stdlib.h>

void main() {
    FILE *file;
    int i, size;
    char* rdata;

    file = fopen("./sample.bin", "rb");
    if (file==NULL) {
        printf("file not found\n");
        exit(1);    //異常終了
    }

    fseek(file, 0, SEEK_END);   //ファイルの最後までシーク
    size = ftell(file);  //ファイルの大きさを取得
    rdata = (char*)malloc(sizeof(char)*size); //メモリのサイズ分、配列を生成

    fseek(file, 0, SEEK_SET);
    fread(rdata, sizeof(char), size, file);
    fclose(file);

    for (i=0; i<size; i++) {
        printf("%x ", rdata[i]);
    }
    printf("\n");
    free(rdata);
}