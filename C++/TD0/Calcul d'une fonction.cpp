#include<iostream>
#include<iomanip>

using namespace std;
   float pow(float b,float p) {                 //fonction pour calculer la puissance
      int i;  
      float res=1;
      for(i=0;i<p;i++)
        res=res*b;
      return res;
   }
   int factorial(int fact){                   //fonction pour calculer le factoriel
      int i,res=1;  
      for(i=1;i<=fact;i++)
         res=res*i;
      return res;
   }


int main(){
   int value,n;
   float som=0,part1=0,part2=0,part3=0;
   cout << "Entrez la valeur pour calculer le sin : ";       //((-1)^n)/((2n+1)!)*x^(2n+1))
   cin >> value;
   for(n=0;n<=14;n++){
      part1=pow(-1,n);                                 //calcul de cette partie de loperation (-1)^n
      part2=factorial(2*n+1);                          //calcul de cette partie de loperation (2n+1)!
      part3=pow(value,2*n+1);                          //calcul de cette partie de loperation x^(2n+1)
      som+=((part1*part3)/part2);                      //operation finale ((-1)^n)/((2n+1)!)*x^(2n+1))
   }
   cout<<"\n"<<"La Valeur de Sin("<<value<<") est : "<<setprecision(5)<<som<<endl;

   return 0;
 }