#include<iostream>
#include<math.h>
class Nombre_Complexe{ 
    public:     
    float Reel;
    float Imaginary;
 };

    void Addition(Nombre_Complexe& first,Nombre_Complexe& second){
        Nombre_Complexe total;
        total.Reel=first.Reel+second.Reel;
        total.Imaginary=first.Imaginary+second.Imaginary;
        std::cout<<"L'addition des deux Nombres Complexe est : "<<total.Reel<<"+"<<total.Imaginary<<" i."<<std::endl;
    }
    void Substraction(Nombre_Complexe& first,Nombre_Complexe& second){
        Nombre_Complexe total;
        total.Reel=first.Reel-second.Reel;
        total.Imaginary=first.Imaginary-second.Imaginary;
        std::cout<<"La soustraction des deux Nombres Complexe est : "<<total.Reel<<"+"<<total.Imaginary<<" i."<<std::endl;
    }

   void Multiplication(Nombre_Complexe& first,Nombre_Complexe& second){
        Nombre_Complexe total;
        if((first.Reel == second.Reel) && (((second.Imaginary+first.Imaginary) == 0) || (second.Imaginary+first.Imaginary) == first.Imaginary*2) ){
            total.Reel=(first.Reel*second.Reel)+((first.Imaginary*second.Imaginary)*-1);
            std::cout<<"La multiplication des deux Nombres Complexe est : "<<total.Reel<<"."<<std::endl;
        }
        else{
            total.Reel=(first.Reel*second.Reel)+(first.Imaginary*second.Imaginary*-1);
            total.Imaginary=(first.Reel*second.Imaginary)+(first.Imaginary*second.Reel);
            std::cout<<"La multiplication des deux Nombres Complexe est : "<<total.Reel<<"+"<<total.Imaginary<<" i."<<std::endl;
          }  
    }
    void Equal(Nombre_Complexe& first,Nombre_Complexe& second){
        if(first.Reel == second.Reel){
            if((second.Imaginary) == (first.Imaginary)){
                std::cout<<"Les deux nombres complexes sont égaux"<<std::endl;
            }
        }
        else std::cout<<"Il n'y a pas d'égalité."<<std::endl;
    }
    void Division(Nombre_Complexe& first,Nombre_Complexe& second){
        Nombre_Complexe Part1,Part2,total;
         if((first.Reel == second.Reel) && (((second.Imaginary+first.Imaginary) == 0) || (second.Imaginary+first.Imaginary) == first.Imaginary*2) ){
            Part1.Reel=(first.Reel*second.Reel)+(pow(second.Imaginary,2));
        }
        else{
            Part1.Reel=(first.Reel*second.Reel)+(first.Imaginary*second.Imaginary);
            Part1.Imaginary=((first.Reel*second.Imaginary)*-1)+(first.Imaginary*second.Reel);
        }
        Part2.Reel=(first.Reel*second.Reel)+(pow(second.Imaginary,2));
        total.Reel=Part1.Reel/Part2.Reel;
        total.Imaginary=Part1.Imaginary/Part2.Reel;
        std::cout<<"La division des deux Nombres Complexe est : "<<total.Reel<<"+"<<total.Imaginary<<"i."<<std::endl;
    }


int main(){
    int choice;
    Nombre_Complexe First_Number,Second_Number;
    std::cout<<"Donner deux nombre complexe z :"<<std::endl<<"(Premier Nombre complexe) Partie reel : ";
    std::cin>>(First_Number.Reel);
    std::cout<<"Partie Imaginaire : ";
    std::cin>>(First_Number.Imaginary);
    std::cout<<"(Deuxieme nombre Imaginaire) Partie reel:";
    std::cin>>(Second_Number.Reel);
    std::cout<<"Partie Imaginaire : ";
    std::cin>>(Second_Number.Imaginary);
    std::cout<<"Tapez 1 pour l'addition, 2 pour la soustraction, 3 pour la multiplication, 4 pour la division, 5 pour l'égalité (0 pour finir le programme)"<<std::endl;
    do{
        std::cin>>choice;
        switch(choice){
            case 1:Addition(First_Number,Second_Number);continue;
            case 2:Substraction(First_Number,Second_Number);continue;
            case 3:Multiplication(First_Number,Second_Number);continue;
            case 4:Division(First_Number,Second_Number);continue;
            case 5:Equal(First_Number,Second_Number);continue;
            default:continue;
        }
    }while(choice !=0);
    std::cout<<"Thank you for using the program"<<std::endl;
    return 0;
}       