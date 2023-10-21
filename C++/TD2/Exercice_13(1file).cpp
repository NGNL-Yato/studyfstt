#include<iostream>

class Point{
    private:
    float x;
    float y;
    float z;
    public:
    Point(const float& x_,const float& y_,const float& z_){
        x=x_;
        y=y_;
        z=z_;
    };
    void deplace (const float& new_x,const float& new_y,const float& new_z){
        x+=new_x;
        y+=new_y;
        z+=new_z;
    };
    void affiche(){
        std::cout<<"Les Coordoonées cartésiennes :("<<x<<","<<y<<","<<z<<")"<<std::endl;
    };
};
int main(){
    Point Original_point(1,5,8);
    Original_point.affiche();
    Original_point.deplace(5,9,0);
    Original_point.affiche();
}
