#include<iostream>
#include<iomanip>

using namespace std;

int main(){

int n = 5, p = 9 ;
int q ;
float x ;

q = n < p ;      //1 true
cout<<q<<endl;
q = n == p ;     //0 false
cout<<q<<endl;
q = p % n + p > n ; // 1 true 
cout<<q<<endl;
x = p / n ;     // 1
cout<<x<<endl;
x = (float) p / n ; //  1.8
cout<<x<<endl;
x = (p + 0.5) / n ; //  1.9
cout<<x<<endl;
x = (int) (p + 0.5) / n ; //  1
cout<<q<<endl;
q = n * (p > n ? n : p) ; //  25
cout<<q<<endl;
q = n * (p < n ? n : p) ; //   45
cout<<q<<endl;

}