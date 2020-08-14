#ifndef _SUB2_H_
#define _SUB2_H_

#include "sup2.h"

class Sub2 : public Sup2 {
    public:
        Sub2() { cout << "Sub2のコンストラクタ" << endl; }
        ~Sub2() { cout << "Sub2のデストラクタ" << endl; }
};

#endif // _SUB2_H_