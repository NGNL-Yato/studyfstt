#include<iostream>
#include<cmath>

class vecteur3d{
    private:
        float x;
        float y;
        float z;
    public:
        vecteur3d(const float x_value = 0,const float y_value = 0,const float z_value = 0){
            x=x_value;
            y=y_value;
            z=z_value;
        }
        void Display(){
            std::cout<<"("<<x<<","<<y<<","<<z<<")"<<std::endl;
        }
        vecteur3d somme(const vecteur3d& First_vector){
            return vecteur3d(First_vector.x+x,First_vector.y+y,First_vector.z+z);
        }
        vecteur3d produit(const vecteur3d& First_vector){
            vecteur3d Total_produit;
            Total_produit.x=(First_vector.y*z)-(First_vector.z*y);
            Total_produit.y=(First_vector.x*z)-(First_vector.z*x);
            Total_produit.z=(First_vector.x*y)-(First_vector.y*x);
            return Total_produit;
        }
        void coincide(const vecteur3d& First_vector){
            if((First_vector.x == x) && (First_vector.y == y) && (First_vector.z == z)){
                std::cout<<"Les vecteurs coincindent"<<std::endl;
            }
            else{std::cout<<"Les vecteurs ne coincident pas."<<std::endl;}
        }
        float norme()const{
            return std::sqrt(std::pow(x,2)+std::pow(y,2)+std::pow(z,2));
        }
        static void normax(const vecteur3d& First_vector,const vecteur3d& Second_vector){
            float First_value=First_vector.norme();
            float Second_value=Second_vector.norme();
            std::cout<<"Le vecteur avec la plus grande norme est : ";
            if(First_value > Second_value){std::cout<<First_value<<" ."<<std::endl;}
            else{std::cout<<Second_value<<" ."<<std::endl;}
        }
    };
    int main() {
    vecteur3d v1(1.0, 2.0, 3.0);
    vecteur3d v2(3.0, 2.0, 1.0);

    v1.Display();
    v2.Display();
    vecteur3d v3=v1.somme(v2);
    v3.Display();
    vecteur3d v4=v1.produit(v2);
    v4.Display();
    v1.coincide(v2);
    vecteur3d::normax(v1,v2);

    return 0;
}