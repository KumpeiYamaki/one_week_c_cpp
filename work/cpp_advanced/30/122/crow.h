#ifndef _CROW_H_
#define _CROW_H_

#include "bird.h"

class Crow : public Bird {
    public:
        void sing() { cout << "カーカー" << endl; }
        void fly() { cout << "カラスが飛びます" << endl; }
};

#endif // _CROW_H_