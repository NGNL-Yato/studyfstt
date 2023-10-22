#include<iostream>

class Pile{
    private:
    int Pile_size;
    int* Pile_array;
    int max;
    public:
    Pile(int Pile_s){       /*declare la pile en donnant a lutilisateur le droit de donner la taille*/
        Pile_size=Pile_s;
        Pile_array=new int[Pile_size];
        max = -1;       /*valeur par defaut de max*/
    }
    bool isPileFull(){           /* vérifie si la pile est pleine (atteint la taille max déclaré)*/
        return max == Pile_size - 1 ;   /*donne la table max du table lorsque la pile est pleine*/
    }
    bool isPileEmpty(){      /* vérifie si la pile est vide pour passer*/
        if(max == -1)       /*retourne vrai si la valeur est par defaut*/
        return true;
        else return false;
    }
    void push(int new_element){            /* rajoute un nouveau element */
        if(!isPileFull()){     /* Si la pile est encore vide la condition est true donc rajoute un élement */
        Pile_array[++max]=new_element;
        }
        else{
            std::cout<<"La pile est pleine."<<std::endl;    /*erreur pile pleine*/
        }
    }
    int pop(){
        bool testing=true;      /*bool pour verifier si pile vide*/
        if(testing != isPileEmpty()){             
            return Pile_array[max--];       /*decremente la pile*/
        }
        else{std::cout<<"La pile est vide. Opération Impossible."<<std::endl; /*erreur pile vide*/
        }
    }

    ~Pile(){        /* destructeur pour vider la memoire se declare a la fin du programme*/
        delete[] Pile_array;
    }
};
int main() {
    Pile p1(3);
    Pile p2(1);
    p1.push(10);
    p1.push(20);
    p1.push(30);
    p1.pop();
    p2.push(10);    /* p2 to Check for special cases */
    p2.push(20);    /*trigger to show the error */
    p2.pop();       
    p2.pop();      /*trigger to show the error*/

    return 0;
}