#include <iostream>
#include <string>
#include "bird.h"
#include "chicken.h"
#include "crow.h"

using namespace std;

int main() {
    Bird *b1, *b2;
    b1 = new Crow;
    b2 = new Chicken;
    b1 -> sing();
    b1 -> fly();
    b2 -> sing();
    b2 -> fly();
    delete b1;
    delete b2;
    return 0;
}