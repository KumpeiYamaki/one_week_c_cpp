#ifndef _VECTOR2D_H_
#define _VECTOR2D_H_

class Vector2d {
    protected:      //自分とサブクラスからアクセス可能、外からは不可
        int m_x;
        int m_y;
    public:
        Vector2d();
        void setValue(int x, int y);
        int getX();
        int getY();
    protected:
        void init();
};

#endif //_VECTOR2D_H_