#include "Exercice_13.h"
#include<iostream>

Point::Point(const float& x_,const float& y_,const float& z_):x(x_),y(y_),z(z_){
    };

void Point::deplace (const float& new_x,const float& new_y,const float& new_z){
    x+=new_x;
    y+=new_y;
    z+=new_z;
};

void Point::affiche ()  {
    std::cout<<"Les Coordoonées cartésiennes :("<<x<<","<<y<<","<<z<<")"<<std::endl;
};
