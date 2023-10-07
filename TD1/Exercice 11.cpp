#include<iostream>

using namespace std;

int main(){
    int i,n,j,c;
    char v('*');
    cout<<"Give a number ^-^  :  ";
    cin>>n;
    cout<<"\n";
    for(i=0;i<n;i++){
        j=i;      //j va etre la repetetion des espaces et i le nombre de ligne
        for(j;j<n;j++)cout<<" ";
        for(c=0;c<=(i*2);c++)cout<<v;  // c a ete introduite pour repeter les etoiles qui vont etre repete n*2+1 fois
        cout<<"\n";
        j++;
    }
return 0;
}