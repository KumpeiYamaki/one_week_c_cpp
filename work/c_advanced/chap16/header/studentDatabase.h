#ifndef _STUDENT_DATABASE_H_
#define _STUDENT_DATABASE_H_

#define MAX_STUDENT 10
#define LENGTH 50

enum ERROR {
    MESSAGE_OK,
    MESSAGE_ERROR
};

typedef struct {
    int id;
    char name[LENGTH];
}student;

void initDatabase(); //DB初期化
int add(int, char*); //データ登録
student* get(int); //データ取得

#endif // _STUDENT_DATABASE_H_