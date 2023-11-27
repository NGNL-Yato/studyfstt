#include<iostream>
#include<iomanip>

using namespace std;

/* Formalisme pointeur*/
int main(){
    int size,i;
    cout<<"Give a size to the array : ";
    cin>>size;
    cout<<endl;
    int* Tableau2 = new int[size];
    int minimum = 10000 , maximum = -10000;
    for( i = 0; i < size ; i++){
        cin>>*(Tableau2+i);
    if( minimum > *(Tableau2+i)){
        minimum = *(Tableau2+i);
    }
    if( maximum < *(Tableau2+i)){
        maximum = *(Tableau2+i);
    }    
    }
    cout<<"Les Valeurs du tableau : ";
    for( i = 0 ; i < size ; i++){
        if( i == (size-1))
        cout<<*(Tableau2+i)<<"."<<endl;
        else cout<<*(Tableau2+i)<<", ";
    }
cout<<" Max : "<<maximum<<endl;
cout<<" Min : "<<minimum<<endl;
delete[]Tableau2;
}