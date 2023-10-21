#include<iostream>

class Test{
    private:
    int i;
    static int Number_of_calls;
    public:
    static void Display(){
        std::cout<<"Display i : "<<Number_of_calls<<std::endl;
        Number_of_calls++;
    }
    static void Display_Repet(){
        std::cout<<"Repetitions : "<<Number_of_calls<<std::endl;
    }
};
int Test::Number_of_calls=0;
int main(){
    Test::Display();
    Test::Display();
    Test::Display();
    Test::Display_Repet();
}