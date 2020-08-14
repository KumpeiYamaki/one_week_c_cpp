#ifndef _CHICKEN_H_
#define _CHICKEN_H_

#include "bird.h"

class Chicken : public Bird {
    public:
        void sing() { cout << "コケコッコー" << endl; }
        void fly() { cout << "鶏は飛べません" << endl; }
};

#endif // _CHICKEN_H_