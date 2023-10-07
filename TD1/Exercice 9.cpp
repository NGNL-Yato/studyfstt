#include<iostream>

using namespace std;

int main(){
    int n,i;
    float som=0;
    cout<<"Donner une valeur à  n pour calculer la série harmonique 1 + 1/2 + 1/3 + 1/4 + ..... + 1/n : ";
    cin>>n;
    cout<<"\n";
    for(int i=1;i<=n;i++){
        som+=(float)(1/i);  // pourquoi i doit etre un float?
    }
    cout<<"La somme est égale à : "<<som<<endl;
    return 0;
}