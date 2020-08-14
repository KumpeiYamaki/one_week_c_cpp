#ifndef _SUB1_H_
#define _SUB1_H_

#include "sup1.h"

class Sub1 : public Sup1 {
    public:
        void func();    //オーバーライドされた関数
};

#endif // _SUB1_H_