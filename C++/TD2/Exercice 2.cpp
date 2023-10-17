#include<iostream>

void verify_2(char User_input){          //verify if the value is multiple of 2

    if((User_input %2) == 0){
        std::cout<<"Il est pair "<<std::endl;
    }
}
void verify_3(char User_input){         //verify if the value is multiple of 3
    if((User_input %3) == 0){
        std::cout<<"il est multiple de 3"<<std::endl;
    }
}

int main(){
int User_input;
do{
    std::cout<<"Donnez un entier : "<<std::endl;
    std::cin>>User_input;
verify_2(User_input);
verify_3(User_input);
if((User_input % 3 == 0) && (User_input % 2 == 0)){   //verify if the value is multiple of 6
    std::cout<<"Il est multiple de 6 "<<std::endl;  
}   
}
while(User_input != 0);
return 0;
}