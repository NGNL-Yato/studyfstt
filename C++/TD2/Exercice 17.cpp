#include<iostream>
#include<string>
class date{
    private:
    std::string Day;
    std::string Month;
    std::string Year;
    std::string Hour;
    std::string Minute;

    std::string getMonth(){
        std::string Months[12]={"Janvier", "Février", "Mars", "Avril", "Mai", "Juin", "Juillet", "Août", "Septembre", "Octobre", "Novembre", "Décembre"};
        int Month_value= std::stoi(Month)-1; /*Array starts from 0 so January will correspong to Months[0] but if the user gave 01 he's talking about january too*/
        if(Month_value >= 0 && Month_value < 11){    /* std::stoi transform a string to an int*/
            return Months[Month_value];
        }
        return "Error in Months Value";
    }
    
    public:
    date(const std::string& User_input){
        if(User_input.length() == 12){
        Day=User_input.substr(0,2);        /*substr works like this:*/
        Month=User_input.substr(2,2);      /*The first value is the value where it starts counting*/
        Year=User_input.substr(4,4);       /*and the second is where it the number of steps*/
        Hour=User_input.substr(8,2);       /*for example: std::string Number(51312314)*/
        Minute=User_input.substr(10,2);    /*Number.substr(4,1)  this will take the fifth number aka number 2*/
        }
    }
    void Display_Date(){
        std::cout<<"("<<Day<<"/"<<Month<<"/"<<Year<<")"<<std::endl;
    }
    void Display_Hour(){
        std::cout<<Hour<<":"<<Minute<<"."<<std::endl;
    }
    void Display(){
        std::cout<<"Le "<<Day<<" "<<getMonth()<<" "<<Year<<" à "<<Hour<<":"<<Minute<<std::endl; /*Used get month to display the getter 09 will be displayed if i called Month*/
    }
};
int main(){
    date Input("010920091123");
    Input.Display_Date();
    Input.Display_Hour();
    Input.Display();
}