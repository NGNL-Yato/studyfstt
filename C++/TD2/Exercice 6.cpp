#include<iostream>

int incrementer_ref(int& Input_Value){
    return Input_Value++;
}
int  permuter_ref(int& Value_1,int& Value_2){
    int swap_value(Value_1);
    Value_1=Value_2;
    Value_2=swap_value;
}
int icrementer_pt(int* Input_value){
    return (++(*Input_value));
}
int permuter_pt(int* first,int* second){
    int swap=*first;
    *first=*second;
    *second=swap;
}

void Reference(){
    int First=1,Second=10;
    std::cout<<"La valeur 1 : "<<First<<" et la valeur 2 : "<<Second<<std::endl;
    incrementer_ref(First);
    permuter_ref(First,Second);
    std::cout<<"La valeur 1 : "<<First<<" et la valeur 2 : "<<Second<<std::endl;
}

void Pointer(){
    int First=1,Second=10;
    int* f=&First;
    int* s=&Second;
    std::cout<<"La valeur 1 : "<<First<<" et la valeur 2 : "<<Second<<std::endl;
    icrementer_pt(f);
    permuter_pt(f,s);
    std::cout<<"La valeur 1 : "<<First<<" et la valeur 2 : "<<Second<<std::endl;
}


main(){
    Reference();
    Pointers();
}