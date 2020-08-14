#ifndef _SUP2_H_
#define _SUP2_H_

#include <iostream>

using namespace std;

class Sup2 {
    public:
        Sup2() {cout << "Sup2のコンストラクタ" << endl; }
        virtual ~Sup2() {cout << "Sup2のデストラクタ" << endl; }
};

#endif // _SUP2_H_