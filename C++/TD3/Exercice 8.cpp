#include<iostream>
#include<math.h>

using namespace std;

template < class T > T division(T& x) {
    return pow(x,2);
}

int main(){
    float Input = 5.01;             /*Testing different types */
    cout<<"The value is "<<division(Input)<<endl;
    Input = static_cast<int>(Input);
    Input = 4;
    cout<<"The value is "<<division(Input)<<endl;
    Input = static_cast<char>(Input);
    Input = 6;
    cout<<"The value is "<<division(Input)<<endl;
}