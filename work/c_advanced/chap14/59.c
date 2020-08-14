#include <stdio.h>
#include <string.h>

struct student {
    int id;
    char name[256];
    int age;
};

void main() {
    struct student data;
    data.id=1;
    strcpy(data.name, "Taro");
    data.age = 18;

    printf("No.:%d Name:%s age:%d\n", data.id, data.name, data.age);
}