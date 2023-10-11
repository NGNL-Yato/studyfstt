#include <iostream>

using namespace std ;


int main() {
    int n=0 ;  
    do {
        if (n%2==0) {
            cout << n << " est pair\n" ;
            n += 3 ; //first loop n=3 second loop skip third loop n=15
            continue ;
        }
        if (n%3==0) {
            cout << n << " est multiple de 3\n" ;
            n += 5 ; // first loop n=8 second loop n=14 third loop n=20
        }
        if (n%5==0) {
            cout << n << " est multiple de 5\n" ;
            break ; // first loop skip second loop skip third loop n=20 and break stop the loop because its false now(0)
        }
        n += 1 ;
    }  while (1) ;
    return 0;
}