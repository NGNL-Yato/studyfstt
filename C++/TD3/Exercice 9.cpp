#include<iostream>
using namespace std;
template <class T> class point
{ T x, y ; // coordonnees
public :
point (T abs, T ord) { x = abs ; y = ord ; }
void affiche () ;
} ;
template <class T> void point<T>::affiche ()
{ cout << "Coordonnees : " << x << " " << y << "\n" ;
}
int main(){
point <char> p (60, 65) ;
point <int> p2 (60, 65) ;
p.affiche () ;
p2.affiche() ;
}
/* a. Que se passe-t-il avec ces instructions : Donne les valeurs ASCII de 60 et 65.
point <char> p (60, 65) ;
p.affiche () ;
Il affiche Coordonnees : 60 65 

b. Comment faut-il modifier la définition de notre patron pour que les instructions
précédentes affichent bien :   
Il faut changer le type de la template en int l.13
Coordonnees : 60 65 */