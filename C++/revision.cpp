#include<iostream>

using namespace std;

class ElemList{
    public:
    int nElem;
    ElemList* suivant;
    ElemList(int Input):nElem(Input),suivant(nullptr){}
};
class List{
    private:
    ElemList* head;
    public:
    List():head(nullptr){}
    bool isEmpty(){
        return head == nullptr;
    }
    void push(int& Input){
        ElemList* newelem = new ElemList(Input);
        newelem->suivant=head;
        head=newelem;
    }
    bool pop(){
        if(!isEmpty()){
            ElemList* temp = head;
            int value = temp ->nElem;
            head=head->suivant;
            delete temp;
            return value;
        }
        return -1;
    }
};
