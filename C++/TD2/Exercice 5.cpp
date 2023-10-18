#include<iostream>

void Display_integer(){
    int Value=10;
    int& ref_a=Value;
    int* p_a = &Value;
    std::cout<<"The value : "<<Value<<", the pointer : "<<p_a<<", the adress : "<<ref_a<<std::endl;
}


main(){
Display_integer();
}