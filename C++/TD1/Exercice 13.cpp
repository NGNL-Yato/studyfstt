#include<iostream>
#include<cstdlib>

using namespace std;


int ThrowDice(){                                //fonction pour lancer le dès 
    int score =(rand()%6)+1;                    //rand pour choisir une valeur entre 1 et 6 le srand va etre declare dans int 
    cout<<"Vous avez lancé un "<<score<<endl;  
    return score;               // la fonction va donner le score
}



float playerTurn(float total){                  //fonction qui gere le deroulement du tour du joueur
    int valid,Turn,repet,firstDice,SecondDice,score;            
    char NumberofThrow;             
    bool correctvalue=false;                    //verifie la valeur donne par lutilisateur
    cout<<"Voulez-vous lancer 1 ou 2 dès  :  ";
    cin.get(NumberofThrow);
    while(correctvalue==false ){                 //entre dans les conditions si la valeur est verifié
    if ( (NumberofThrow =='1') || (NumberofThrow=='2') ){     //verifie que l'utilisateur a donne 1 ou 2 
        if(NumberofThrow=='1'){                 //Cas 1                                                             
            total+=ThrowDice();
        };
        if(NumberofThrow=='2'){                 //Cas 2
            firstDice=ThrowDice();  
            SecondDice=ThrowDice();
            if(firstDice==SecondDice) total-=(firstDice*2);
            else total= firstDice+SecondDice;
       }correctvalue=true;
    }
    else{                                        //Valeur donné par lutilisateur incorrect
        cin>>NumberofThrow;
    }
    }
return total;                                    //donne la valeur du score a chaque fois
}

int main(){
srand(static_cast<unsigned int>(time(nullptr)));    //utilise dans main pour que la valeur random ne soit pas redondante
int total,player1=1,player2=2,Turn=1;
int scoreplayer1,scoreplayer2;
for(Turn=1;Turn;Turn++){                            //Donne les infos sur chaque tour de jeux
cout<<"Turn Number : "<<Turn<<endl;
cout<<"c'est le tour du 1er joueur"<<endl;          
scoreplayer1+=playerTurn(total);                    
cout<<"Score Joueur 1 : "<<scoreplayer1<<endl;
cout<<"c'est le tour du 2eme joueur"<<endl;
scoreplayer2+=playerTurn(total);
cout<<"Score Joueur 2 : "<<scoreplayer2<<endl;
cout<<"_________________________________________________________"<<endl;
if(scoreplayer1>=30 && scoreplayer2>=30){           
    cout<<"La partie se finit en match nul";
    break;
}
if(scoreplayer1>=30 &&scoreplayer1>scoreplayer2 ){   
    cout<<"Le joueur 1 a gagné la partie";
    break;
}
if(scoreplayer2>=30 && scoreplayer2>scoreplayer1){
    cout<<"Le joueur 2 a gagné la partie";
    break;
}
}
return 0;
}