#include<iostream>

void swap(int& a,int& b){
    int swap_value(a);
    a=b;
    b=swap_value;
}
void New_Array(int new_item){
    int* Array_2=new int(new_item);
}

int main(){
int *Array_2,Original_Array[10],repet,checking_value,max_value,min_value=100;
std::cout<<"Fill the Array with 10 Values :"<<std::endl;
do{
    std::cout<<"Give the Value for the element "<<repet<<" : "<<std::endl;
    std::cin>>Original_Array[repet];''
    repet++;
}while(repet<10);
for(int repetition;repetition<10;repetition++){
for(checking_value=0 ;checking_value<9;checking_value++){
    if(Original_Array[checking_value]>=Original_Array[checking_value+1])
    {
    swap(Original_Array[checking_value],Original_Array[checking_value+1]);
    }
}
}
std::cout<<"array ";
for (int i ; i < 10; i++)
{
   std::cout<<Original_Array[i]<<" ";
}

}