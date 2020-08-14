#ifndef _POSITION2D_H_
#define _POSITION2D_H_

#include "vector2d.h"

class Position2d : public Vector2d {
    public:
        void resetPosition();
        void move(int dx, int dy);
};

#endif //_POSITION2D_H_