#include<iostream>
#include<set>
#include<iterator>

using namespace std;

bool Searching(set<int>& container,int& searched_value){
    return container.find(searched_value)!=container.end();
};
bool Searching_2(set<int>::iterator& container_1, set<int>::iterator& container_2, int& searched_value) {
    for( ; container_1 != container_2; ++container_1) {
        if (*container_1 == searched_value) {
            return true;}
    }return false;
};
template <class iterator ,class Y > 
bool Searching_default(iterator& debut, iterator& fin, Y& searched_value){
    for( ; debut != fin; ++debut) {
        if (*debut == searched_value) {
            return true;}
    }return false;
};
int main(){
    set<int> Container;
    for(int i=0;i < 100;i++){
        Container.insert(i);
    }
    Container.erase(30); /*Enter 30 to test if bool is working properly*/
    int Input;
    cout<<"Enter a value you want to search : ";
    cin>>Input;
    if(Searching(Container,Input)){
        cout<<"The value exist"<<endl;
    }else{
        cout<<"The value doesn't exist"<<endl;
    }
    set<int>::iterator entry=Container.begin(), exit=Container.end();
    cout<<"Enter a value you want to search : ";
    cin>>Input;
    if(Searching_2(entry,exit,Input)){
        cout<<endl<<"The value exist"<<endl;
    }else{
        cout<<"The value doesn't exist"<<endl; /*still testing with 30*/
    }
    cout<<"Enter a value you want to search : ";
    cin>>Input;
    if(Searching_default(entry,exit,Input)){ /*Testing default template*/
        cout<<endl<<"The value exist"<<endl;
    }else{
        cout<<"The value doesn't exist"<<endl;
    }
}