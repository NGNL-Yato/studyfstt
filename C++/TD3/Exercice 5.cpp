#include <iostream>
using namespace std;
class Test{
public:
static int tableau[] ;
public :
static int division(int indice, int diviseur){
    if(diviseur == 0){
    throw "Trying to divide by 0 !";
    }
return tableau[indice]/diviseur;
}
};
int Test::tableau[] = {17, 12, 15, 38, 29, 157, 89, -22, 0, 5} ;
int main() {
int x, y;
bool Passing_Test=false;
do{
cout << "Entrez l’indice de l’entier à diviser: " << endl;
cin >> x ;
cout << "Entrez le diviseur: " << endl;
cin >> y ;
try{
    int test=Test::division( x, y );
        if( x < sizeof(Test::tableau) && (Test::tableau[x]!=0)){
    cout << "The result of the division is: " << test << endl;
    Passing_Test=true;
    }
    else { throw "L'indice est invalide,Donnez un indice entre 0 et 10.";}
}
catch(const char* errorMessage){
    cout<<errorMessage<<endl;
}
}while(!Passing_Test);
return 0; 
}