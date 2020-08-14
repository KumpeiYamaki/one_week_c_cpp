#include <iostream>
#include <list>

using namespace std;

int main() {
    list<int> li;
    li.push_back(1);
    li.push_back(2);
    li.push_front(3);   //前にデータを挿入
    list<int>::iterator itr;

    itr = li.begin();
    itr++;
    li.insert(itr, 4);  //itr=1(前から2番目)にデータを挿入

    for (itr = li.begin(); itr != li.end(); itr++) {
        cout << *itr << " ";
    }
    cout << endl;
    return 0;
}