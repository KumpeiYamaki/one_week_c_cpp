#include <stdio.h>
#include "header/studentDatabase.h"
#include "header/dataOutput.h"

void main() {
    int i;
    char names[][LENGTH] = {"Taro", "Michiko", "Jiro", "Sayaka"};
    int ids[] = {1, 2, 2, 3};
    initDatabase();
    for (i=0; i<4; i++) {
        add(ids[i], names[i]);
        printf("登録: %d %s\n", ids[i], names[i]);
        showError();
    }
    for (i=0; i<3; i++) {
        showStudentData(get(i + 1));
    }
}