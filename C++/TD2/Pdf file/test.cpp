#include "Point.h"
#include <iostream>

Point::Point(float x_, float y_) : x(x_), y(y_) {
    // Constructor to initialize the coordinates
}

void Point::deplace(float dx, float dy) {
    x += dx;
    y += dy;
}

void Point::affiche() const {
    std::cout << "Point coordinates: (" << x << ", " << y << ")" << std::endl;
}