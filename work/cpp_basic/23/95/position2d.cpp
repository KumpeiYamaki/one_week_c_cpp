#include "position2d.h"

void Position2d::resetPosition() {
    init();
}

void Position2d::move(int dx, int dy) {
    m_x += dx;
    m_y += dy;
}