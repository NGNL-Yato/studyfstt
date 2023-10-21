#ifndef POINT_H
#define POINT_H

class Point {
private:
    float x;
    float y;

public:
    Point(float x_, float y_);
    void deplace(float dx, float dy);
    void affiche() const;
};

#endif
