#include <iostream>


using namespace std ;


int main() {
    int n, p, q ;
    /* cas 1 */
    n = 5 ; p = 2 ;
    q = n++ >p || p++ != 3 ; // vu que la premiere condition est vrai il skip la 2eme condition
    cout << "A : n = " << n << " p = " << p << " q = " << q << "\n" ; // A : n = 6 p = 2 q = 1
    /* cas 2 */
    n = 5 ; p = 2 ;
    q = n++ < p || p++ != 3 ; // il passe par la premiere condition donc n est incremente directement
    cout << "B : n = " << n << " p = " << p << " q = " << q << "\n" ; // B : n = 5 p = 3 q = 1 
    /* cas 3 */
    n = 5 ; p = 2 ;
    q = ++n == 3 && ++p == 3 ; // comme la 1ere condition est fausse il ne passe pas a la 2eme commande et donne la valeur de q false
    cout << "C : n = " << n << " p = " << p << " q = " << q << "\n" ; // C : n = 6 p = 2 q = 0
    /* cas 4 */
    n = 5 ; p = 2 ;
    q = ++n == 6 && ++p == 3 ;
    cout << "D : n = " << n << " p = " << p << " q = " << q << "\n" ; // D : n = 6 p = 3 q = 1
    return 0;
}