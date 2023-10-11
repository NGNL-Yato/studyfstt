#include<iostream>
#include<iomanip>

using namespace std;


int main(){
    int tableau[10]={1,2,3,4,5,6,7,8,9,10};
    int i,j;
    cout<<setw(7)<<"I";
    for(i=1;i<=10;i++)cout<<setw(4)<<i;
    cout<<"\n";
    for(i=0;i<=46;i++)cout<<"-";
    cout<<"\n";
    for(i=1;i<=10;i++){
        cout<<setw(4)<<i<<setw(3)<<"  I"<<setw(4);
        for(j=0;j<10;j++){
            cout<<tableau[j]*i<<setw(4);
        }
        cout<<"\n";
    }


}