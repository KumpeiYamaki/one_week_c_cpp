#include <stdio.h>
#include <string.h>

struct student {
    int id;
    char name[256];
    int age;
};

typedef struct student student_data;

void main() {
    int i;
    student_data data[] = {
        {1, "Taro", 18},
        {2, "Ryoko", 19},
        {3, "Takashi", 18},
        {4, "Yuko", 18}
    };

    for (i=0; i<4; i++) {
        printf("No.%d Name:%s Age:%d\n", data[i].id, data[i].name, data[i].age);
    }
}