#include <iostream>

using namespace std ;


int main() {
    int n=10, p=5, q=10, r ;
    r = n == (p = q) ;
    cout << "A : n = " << n << " p = " << p << " q = " << q << " r = "<< r << "\n" ; // A : n = 10 p = 10 q = 10 r = 1 (true)
    n = p = q = 5 ;
    n += p += q ;    // p=p+q= 10  n=n+p=15
    cout << "B : n = " << n << " p = " << p << " q = " << q << "\n" ; // B : n = 15 p = 10 q = 5
    q = n < p ? n++ : p++ ;
    cout << "C : n = " << n << " p = " << p << " q = " << q << "\n" ; // C : n = 15 p = 11 q = 10
    q = n > p ? n++ : p++ ;
    cout << "D : n = " << n << " p = " << p << " q = " << q << "\n" ; // D : n = 16 p = 11 q = 15
}