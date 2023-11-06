#include<iostream>
#include<iomanip>

using namespace std;

/* Formalisme tableau */

int main(){
int Tableau1[10],i;
int minimum = 1000 , maximum = -1000 ;
for( ; i < 10 ; i++){
    cin>>Tableau1[i];
    if( minimum > Tableau1[i]){
        minimum = Tableau1[i];
    }
    if( maximum < Tableau1[i]){
        maximum = Tableau1[i];
    }
}
cout<<"Les Valeurs du tableau : ";
for( i =0 ; i < 10 ; i++){
    if( i == 9)
    cout<<Tableau1[i]<<"."<<endl;
    else cout<<Tableau1[i]<<", ";
}
cout<<" Max : "<<maximum<<endl;
cout<<" Min : "<<minimum<<endl;
}