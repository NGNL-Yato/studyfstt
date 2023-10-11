#include <iostream>


using namespace std ;


int main() {
    int n ;
    cin >> n ;
    switch (n) {
    case 0 : cout <<"Nul\n" ; [[fallthrough]]; // [[fallthrough]]; justifie au program labsence de break rien de plus
    case 1 : ;[[fallthrough]];
    case 2 : cout <<"Petit\n" ; break ;
    case 3 : ; [[fallthrough]];
    case 4 : ; [[fallthrough]];
    case 5 : cout <<"Moyen\n" ;[[fallthrough]];
    default : cout <<"Grand\n" ;
    }
    /* Quels résultats affiche-t-il lorsqu’on lui fournit en donnée :
a. 0  == Nul
         Petit
b. 1  == Petit

c. 4  == Moyen
         Grand

d. 10 == Grand

Resultat
*/
    return 0;
}