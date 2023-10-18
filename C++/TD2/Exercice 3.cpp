#include<iostream>

void formalisme_tableau(){
    int Array[4],repet=0;
    std::cout<<"Fill the table"<<std::endl;
    for(int i=0;i<4;i++){
        std::cout<<std::endl<<"Enter the value "<<repet++<<"of the Array :";
        std::cin>>Array[i];
    }
    std::cout<<"The values of the Array are : ";
    for(int i=0;i<4;i++){
        std::cout<<Array[i]<<", ";
    }
}


void formalisme_pointeur(){     //formalisme Array 
    int taille; 
    std::cout<<"Give a size to the Array : ";
    std::cin>>taille;           //declare la taille du tableau
    std::cout<<"\n";
    int *Array=new int[taille];  // allocation dynamiqueme du tableau *array=new type[size]
    std::cout<<"Fill the table";
    int i,repet=0;
    do{
        std::cout<<std::endl<<"Enter the value "<<repet++<<"of the Array :";
        std::cin>>*(Array+i);
        i++;
    }while(i<taille);
    std::cout<<"The values of the Array are : ";
    do{
        std::cout<<*(Array+i)<<", ";
        i++;
    }while(i<taille);
} 

main(){
    formalisme_tableau();
    formalisme_pointeur();
    std::cout<<std::endl;

}