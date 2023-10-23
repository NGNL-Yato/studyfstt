#include<iostream>
#include<string>

class Animal{    
    public:
    std::string name;
    int age;
void set_Value(const std::string naming,int age_number){   /*why use the const here pb of compilor or what?*/
    name=naming;
    age=age_number;
}

};

class Zebra : public Animal{    
    public: 
    std::string Origin_place;
    void fill_origin(const std::string& origin){
        Origin_place=origin;
    }
    void Print(){
        std::cout<<"The name :"<<name<<", the age : "<<age<<" and the origin : "<<Origin_place<<"."<<std::endl;
    }
};

class Dolphin : public Animal{
        public: 
    std::string Origin_place;
    void fill_origin(const std::string& origin){
        Origin_place=origin;
    }
    void Print(){
        std::cout<<"The name :"<<name<<", the age : "<<age<<" and the origin : "<<Origin_place<<"."<<std::endl;
    }
};

int main(){
    Zebra zebra;
    Dolphin dolphin;
    zebra.set_Value("zebra",10);
    zebra.fill_origin("Afriqua");
    dolphin.set_Value("dolphin",7);
    dolphin.fill_origin("Antartic Ocean");
    zebra.Print();
    dolphin.Print();


}