#include <stdio.h>
#include <stdlib.h>

void main() {
    FILE *file;
    int c;
    file = fopen("./sample.txt", "r");
    if (file==NULL) {
        printf("file not found\n");
        exit(1);    //異常終了
    }
    
    while ((c=fgetc(file)) != EOF) {
        printf("%c", (char)c);
    }
    fclose(file);
}