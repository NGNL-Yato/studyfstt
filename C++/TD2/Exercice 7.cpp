#include<iostream>

void swap(int& a,int& b){       /*swaping values using reference*/
    int swap_value(a);
    a=b;
    b=swap_value;
}

int main(){
int *Array_2,Original_Array[10],repet,checking_value;
std::cout<<"Fill the Array with 10 Values :"<<std::endl;  
do{                                         /*Filling the array*/
    std::cout<<"Give the Value for the element "<<repet<<" : "<<std::endl;   
    std::cin>>Original_Array[repet];
    repet++;
}while(repet<10);
for(int repetition;repetition<10;repetition++){         /*Repeting the check 10times*/
for(checking_value=0 ;checking_value<9;checking_value++){       /*browsing the array*/
    if(Original_Array[checking_value]>=Original_Array[checking_value+1])   /*condition to swap value if value n is greater than value n+1*/
    {
    swap(Original_Array[checking_value],Original_Array[checking_value+1]);  /*calling the swap function*/
    }
}
}
std::cout<<"array ";            /*priting the final array*/
for (int i ; i < 10; i++)
{
   std::cout<<Original_Array[i]<<" ";
}

}