#include<iostream>
#include<iomanip>

using namespace std;


int main(){
    int n,i,part1=1,part2=1,part3=0;
    cout<<"Donnez un n pour donner la valeur de Un de la suite de Fibonnacci :";
    cin>>n;
    cout<<"\n";
    switch(n){
        case 0 : cout<<"u0 = 0"<<endl ;break;
        case 1 : cout<<"u1 = 1"<<endl ;break;
        default : {
            cout<<"u0   = 0"<<endl;
            for(i=1;i<=n;i++){
                cout<<"u"<<i<<setw(7)<<"= "<<part1<<endl;
                part1=part3+part2;
                part3=part2;
                part2=part1;
                }
                }
    }
    return 0;
}