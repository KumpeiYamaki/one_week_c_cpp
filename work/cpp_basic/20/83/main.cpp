#include "sample.h"
#include <iostream>

using namespace std;

int main() {
    Sample s;
    s.a = 1;
    // s.b = 2; // エラーになる
    s.func1();
    // s.func2();   // エラーになる
}