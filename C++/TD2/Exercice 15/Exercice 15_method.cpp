#include<iostream>
#include<cstdlib>
#include"Exercice 15.h"

Fichier::Fichier(int size): longueur(size){
    ptr_longueur = new char [longueur];
    count=0;
}

void Fichier::Remplit(){
    int File_number=(rand()%16)+1;
    for(int start = 0;start < File_number;start++){
        ptr_longueur[start]=(rand()%128)+1;     /*Give random ascii value between 1 and 128*/
        count++;
    }
}
void Fichier::Creation(){
     for (int i = 0; i < longueur; i++) {
        ptr_longueur[i] = 0; 
    }
}
void Fichier::Affiche(){
    std::cout<<"La zone pointée : ";
    for(int start = 0;start < count;start++){
    std::cout<<ptr_longueur[start];
    }
    std::cout<<std::endl;
}
Fichier::~Fichier(){
    delete[]ptr_longueur;
}
int count=0;