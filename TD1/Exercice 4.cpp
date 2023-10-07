#include<iomanip>
#include<iostream>

using namespace std;
int main(){
    int i, j, n ;
    i = 0 ;
    n = i++ ;
    cout << "A : i = " << i << " n = " << n << "\n" ;  // A : i = 1 n = 0
    i = 10 ;
    n = ++ i ;
    cout << "B : i = " << i << " n = " << n << "\n" ;  // B: i = 11 n = 11
    i = 20 ;
    j = 5 ;
    n = i++ * ++ j ;
    cout << "C : i = " << i << " j = " << j << " n = " << n << "\n" ;  // C : i = 21 j = 6 n = 120
    i = 15 ;
    n = i += 3 ;      //equivaut a ecrire i=i+3 puis seulement n=i
    cout << "D : i = " << i << " n = " << n << "\n" ;  // D : i = 18 n = 18
    i = 3 ;
    j = 5 ;
    n = i *= --j ;    //equivaut a ecrire i=i*--j puis seulement n=i
    cout << "E : i = " << i << " j = " << j << " n = " << n << "\n" ;  // E : i = 12 j = 4 n = 12
    return 0;
}