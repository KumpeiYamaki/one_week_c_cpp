#ifndef _BIRD_H_
#define _BIRD_H_

#include <iostream>
#include <string>

using namespace std;

class Bird {
    public:
        virtual void sing() = 0;    //純粋仮想関数(サブクラスからの呼び出しのみを期待した実装)
        void fly() { cout << "鳥が飛びます" << endl; }
};

#endif // _BIRD_H_