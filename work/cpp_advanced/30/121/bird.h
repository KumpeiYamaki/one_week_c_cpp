#ifndef _BIRD_H_
#define _BIRD_H_

#include <iostream>
#include <string>

using namespace std;

class Bird {
    public:
        virtual void sing() { cout << "鳥が鳴きます" << endl; }
        void fly() { cout << "鳥が飛びます" << endl; }
};

#endif // _BIRD_H_