#include <stdio.h>
#include <stdlib.h>

void main() {
    FILE *file;
    file = fopen("./sample.txt", "w");
    if (file==NULL) {
        printf("file not found\n");
        exit(1);    //異常終了
    }
    
    //書き込み(ファイルがある場合は上書き)
    fprintf(file, "Hello World.\r\n");  //ファイルでの改行は\r\n
    fprintf(file, "ABCDEF\r\n");
    fclose(file);
}