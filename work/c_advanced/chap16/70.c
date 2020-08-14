#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENT 10
#define LENGTH 50
#define MESSAGE_LENGTH 256

enum ERROR {
    MESSAGE_OK,
    MESSAGE_ERROR
};

typedef struct {
    int id;
    char name[LENGTH];
}student;

int num = 0; //学生数

student student_database[MAX_STUDENT];

int Error;

void initDatabase(); //DB初期化
int add(int, char*); //データ登録
student* get(int); //データ取得
void showStudentData(student*); //データの表示
void showError(); //エラー表示

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

void initDatabase() {
    int i;
    for (i=0; i<MAX_STUDENT; i++) {
        student_database[i].id = -1;
        strcpy(student_database[i].name, "");
        Error = MESSAGE_OK;
        num=0;
    }
}

int add(int id, char*name) {
    if (get(id) == NULL && num<MAX_STUDENT) {
        student_database[num].id = id;
        strcpy(student_database[num].name, name);
        num++;
        Error = MESSAGE_OK;
        return 1;
    }
    Error = MESSAGE_ERROR;
    return 0;
}

student* get(int id) {
    int i;
    for (i=0; i<num; i++) {
        if (student_database[i].id == id) {
            return &student_database[i];
        }
    }
    return NULL;
}

void showStudentData(student* data) {
    if (data != NULL) {
        printf("No.%d Name: %s\n", data->id, data->name);
    }
    else {
        printf("データが登録されてません。\n");
    }
}

void showError() {
    switch (Error) {
        case MESSAGE_OK:
            printf("OK!\n");
            break;
        case MESSAGE_ERROR:
            printf("ERROR!\n");
            break;
    }
}