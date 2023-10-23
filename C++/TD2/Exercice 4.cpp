#include<iostream>
#include<cmath>

main(){
    int size_Array,repet,i = 0;
    std::cout<<"Enter a size for the Array :";
    std::cin>>size_Array;
    int *Array_1 = new int [size_Array];
    std::cout<<"Fill the Array.";
    do{
        std::cout<<std::endl<<"Enter the value "<<repet++<<" of the Array :";
        std::cin>>*(Array_1+i);
        i++;
    }while(i < size_Array);
    int j=1;
    int *Array_2 = new int [i];
    for(repet = 0;repet < i ; repet++){
        *(Array_2+repet) = pow(*(Array_1+repet),2);
        std::cout<<"The squareroot of  "<<*(Array_1+repet)<<" is : "<<*(Array_2+repet)<<std::endl;
    }
    delete[] Array_1;
    delete[] Array_2;
    
}