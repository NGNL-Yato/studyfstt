#include<iostream>
#include<math.h>

class Nombre_Complexe{ 
    public:     
        float Reel;
        float Imaginary;
        Nombre_Complexe(){};
        Nombre_Complexe(int rel,int imag){
            Reel=rel;
            Imaginary=imag;
        }
        Nombre_Complexe operator+(const Nombre_Complexe& second){
            Nombre_Complexe total;
            total.Reel=Reel+second.Reel;
            total.Imaginary=Imaginary+second.Imaginary;
            return total;
        }
        Nombre_Complexe operator-(Nombre_Complexe& second){
        Nombre_Complexe total;
        total.Reel=Reel-second.Reel;
        total.Imaginary=Imaginary-second.Imaginary;
        return total;
        }
        Nombre_Complexe operator/(Nombre_Complexe& second){
        Nombre_Complexe Part1,Part2,total;
         if((Reel == second.Reel) && (((second.Imaginary+Imaginary) == 0) || (second.Imaginary+Imaginary) == Imaginary*2) ){
            Part1.Reel=(Reel*second.Reel)+(pow(second.Imaginary,2));
        }
        else{
            Part1.Reel=(Reel*second.Reel)+(Imaginary*second.Imaginary);
            Part1.Imaginary=((Reel*second.Imaginary)*-1)+(Imaginary*second.Reel);
        }
        if((Reel == second.Reel) && ((((second.Imaginary*-1)+Imaginary) == 0) || ((second.Imaginary*-1)+Imaginary) == Imaginary*2) ){
            Part2.Reel=(Reel*second.Reel)+((Imaginary*second.Imaginary)*-1);
        }
        Part2.Reel=(Reel*second.Reel)+(pow(second.Imaginary,2));
        total.Reel=Part1.Reel/Part2.Reel;
        total.Imaginary=Part1.Imaginary/Part2.Reel;
        return total;
        }
        bool operator==(Nombre_Complexe& second){
            return ((Reel==second.Reel) && (Imaginary==second.Imaginary));
        }
        Nombre_Complexe operator*(Nombre_Complexe& second){         //avoid this method because of the confusion between the pointer and multiplication
        Nombre_Complexe total;                                      //can be done in this case because there is no pointer used
        if((Reel == second.Reel) && (((second.Imaginary+Imaginary) == 0) || (second.Imaginary+Imaginary) == Imaginary*2) ){
            total.Reel=(Reel*second.Reel)+((Imaginary*second.Imaginary)*-1);
        }
        else{
            total.Reel=(Reel*second.Reel)+(Imaginary*second.Imaginary*-1);
            total.Imaginary=(Reel*second.Imaginary)+(Imaginary*second.Reel);
        }
        return total;
    }
        void display(){
            if(Imaginary>0)
            std::cout<<"La valeur : "<<Reel<<" + "<<Imaginary<<" i."<<std::endl;
            else std::cout<<"La valeur : "<<Reel<<" "<<Imaginary<<" i."<<std::endl;

        }
};
    void equal(int& check){
        if(check==1)
            std::cout<<"Les deux nombres complexes sont égaux"<<std::endl;
        else{ std::cout<<"Il n'y a pas d'égalité."<<std::endl;}
    };


int main(){
    int choice,check;
    Nombre_Complexe First_Number,Second_Number,Total;
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
            case 1:{Total = First_Number + Second_Number;    
                    Total.display();};continue;
            case 2:{Total = First_Number - Second_Number;    
                    Total.display();};continue;
            case 3:{Total = First_Number * Second_Number;    
                    Total.display();};continue;
            case 4:{Total = First_Number / Second_Number;    
                    Total.display();};continue;
            case 5:{check = First_Number == Second_Number;    
                        equal(check);};continue;
            default:continue;
        }
    }while(choice !=0);
    std::cout<<"Thank you for using the program"<<std::endl;
    return 0;
}