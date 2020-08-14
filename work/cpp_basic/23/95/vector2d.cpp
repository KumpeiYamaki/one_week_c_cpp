#include "vector2d.h"

Vector2d::Vector2d() {
    init();
}

void Vector2d::setValue(int x, int y) {
    m_x = x; m_y = y;
}

int Vector2d::getX() {
    return m_x;
}

int Vector2d::getY() {
    return m_y;
}

void Vector2d::init() {
    m_x = 0; m_y = 0;
}