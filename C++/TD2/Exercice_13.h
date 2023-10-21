#ifndef EXERCICE_13_H
#define EXERCICE_13_H

class Point{
    private:
    float x;
    float y;
    float z;
    public:
    Point(const float& x_,const float& y_,const float& z_);
    void deplace (const float& new_x,const float& new_y,const float& new_z);
    void affiche();
};

#endif 