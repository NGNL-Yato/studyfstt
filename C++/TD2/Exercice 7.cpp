#include<iostream>

void swap(int& a,int& b){       /*swaping values using reference*/
    int swap_value(a);
    a=b;
    b=swap_value;
}

int main(){
int Original_Array[10],repet,checking_value;
bool Looped=false;
std::cout<<"Fill the Array with 10 Values :"<<std::endl;  
do{                                         /*Filling the array*/
    std::cout<<"Give the Value for the element "<<repet<<" : "<<std::endl;   
    std::cin>>Original_Array[repet];
    repet++;
}while(repet<10);
do{         /*Repeting the check 10times*/
    Looped=false;
    for(checking_value=0 ;checking_value<9;checking_value++){       /*browsing the array*/
    if(Original_Array[checking_value]>=Original_Array[checking_value+1])   /*condition to swap value if value n is greater than value n+1*/
    {
    swap(Original_Array[checking_value],Original_Array[checking_value+1]);  /*calling the swap function*/
    Looped=true;
    }
}
}while(Looped);
std::cout<<"array ";            /*priting the final array*/
for (int i ; i < 10; i++)
{
   std::cout<<Original_Array[i]<<" ";
}

}