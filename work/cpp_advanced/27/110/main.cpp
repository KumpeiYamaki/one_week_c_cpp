#include <iostream>
#include <string>

using namespace std;

template <typename T>
T add(T x, T y) {
    return x + y;
}

int main() {
    cout << add<int>(4, 3) << endl;
    cout << add<string>("ABC", "DEF") << endl;
    cout << add(1, 2) << endl;      // intの場合は型指定省略可能
    // cout << add("ABC", "DEF") << endl;   // stringの場合、型指定が必要
    // cout << add(1, 2.3) << endl;         // 型が不一致
}