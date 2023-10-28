#include<iostream>

using namespace std; 

int main (){
 int a,b,c,d,loop1,loop2,som1,som2,inter=0;
 int ab[10],cd[10],som[10];

    cout<<"\n Donnez une valeur A ";
    cin>>a;
    cout<<"\n Donnez une valeur B ";
    cin>>b;
    cout<<"\n Donnez une valeur C ";
    cin>>c;
    cout<<"\n Donnez une valeur D ";
    cin>>d;
    if(a<b){                                                            //equation pour diviser et donner chaque nombre dans l'intervalle
        for(loop1=0;a<=b;a++){                                          //tableau contenant les valeurs de lintervalle cd avec c plus grande que d
            ab[loop1]=a;
            loop1++;
        }
    }else{
        for(loop1=0;b<=a;b++){
            ab[loop1]=b;                                                //tableau contenant les valeurs de lintervalle ab si lutilisateur donne a plus grande que b
            loop1++;
        }
        }
     if(c<d){                                                           //tableau contenant les valeurs de lintervalle cd avec c plus grande que d
            loop1++;
        for(loop2=0;c<=d;c++){
            cd[loop2]=c;
            loop2++;
        }
           }
     else{
        for(loop2=0;c>=d;d++){                                         //tableau contenant les valeurs de lintervalle ab si lutilisateur donne c plus grande que d
            cd[loop2]=d;
            loop2++;
        }
    }
    if(ab[loop1-=1]>=cd[0]){
        for(som1=0;som1<=loop1;som1++){                                 //loop verifiant le 1er tableau ab
            for(som2=0;som2<loop2;som2++){                              //loop verifiant le 1er tableau ab
                if(ab[som1]==cd[som2]){                                 //entrée des valeurs dans le tableau definitif
                    som[inter]=ab[som1];
                    inter++;

                }
            }
        }
    }
    if(som[inter-=1]!=0){                                               //Donner deux réponses différentes si il existe une intersection ou non
    cout<<"L'intervalle où se croisent AB et CD est ["<<som[0]<<","<<som[inter-=1]<<"]"<<endl;
    }
    else{
    cout<<"Les deux intervalles ne se coupent pas entre eux"<<endl;
    }

return 0;

}