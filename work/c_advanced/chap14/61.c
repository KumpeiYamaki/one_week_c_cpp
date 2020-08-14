#include <stdio.h>
#include <string.h>

typedef struct {
    int id;
    char name[256];
    int age;
}student_data;

void setData(student_data*, int, char*, int);
void showData(student_data*);

void main() {
    student_data data[4];
    int i;
    int id[] = {1, 2, 3, 4};
    char name[][256] = {"Taro", "Ryoko", "Takashi", "Yuko"};
    int age[] = {18, 19, 18, 18};

    for (i=0; i<4; i++) {
        setData(&data[i], id[i], name[i], age[i]);
    }

    for (i=0; i<4; i++) {
        showData(&data[i]);
    }
    return;
}

//構造化ポインタの値を得るには.ではなく->を使用。
void setData(student_data* data, int id, char* name, int age) {
    data->id = id;
    strcpy(data->name, name);
    data->age = age;
}

void showData(student_data* data) {
    printf("No.%d Name:%s Age:%d\n", data->id, data->name, data->age);
}