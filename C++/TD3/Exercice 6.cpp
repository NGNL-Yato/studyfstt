#include<iostream>

using namespace std;

class vect
{ protected : // en prévision d'une éventuelle classe dérivée
int nelem ; // nombre d'éléments
int * adr ; // adresse zone dynamique contenant les éléments
public :
vect (int) ; // constructeur
~vect () ; // destructeur
int &operator[](int index){
    if (index >= 0 && index < nelem){   /* Need to verify this part (Error without it l13 to l17)*/
        return adr[index];
    }
        throw "Index out of bounds";
    }   
} ;
vect::~vect(){ delete[]adr;}    /*Giving instructions to the destructor*/
vect::vect(int n) : nelem(n), adr(new int[n]) {}    /*Giving instructions to the constructor*/

class vectok : public vect { 
    public:
    vectok(int Input) : vect(Input) {} //Giving a value to the new constructor
    vectok(const vectok& sizing):vect(sizing.nelem){    /* Copy of the constructor */
        for(int i = 0 ; i < sizing.nelem ; i++){
            adr[i]=sizing.adr[i];
        }
    }
    vectok& operator=(const vectok& sizing){
        if(nelem == sizing.nelem){  /* if the element already exist end the task*/
            return *this;
        }
        if(nelem != sizing.nelem){ /* entering new element*/
            delete[]adr;    /* freeing the pointer*/
            nelem = sizing.nelem;   
            adr = new int[nelem];   /* allocution dynamique*/
        }
        for(int i = 0; i < sizing.nelem ; i++){ /* copying of the vector  */
            adr[i]=sizing.adr[i];
        }
        return *this;
    }
    int size() const {  /* printing the new size of the vectok*/
        return nelem;
    }
};
int main() {
    vectok First_Vector(5);  
    First_Vector[0] = 1;
    First_Vector[1] = 2;
    First_Vector[2] = 3;
    First_Vector[3] = 4;
    First_Vector[4] = 5;
    vectok Second_Vector = First_Vector;
    cout << "Size of Second_Vector: " << Second_Vector.size() << endl; 
    for (int i = 0; i < Second_Vector.size(); i++) {    /*printing the copy vector*/
        cout << Second_Vector[i] << " ";
    }
    cout<<endl;
    for (int i = 0; i < Second_Vector.size(); i++) {    /*printing the first vector*/
        cout << First_Vector[i] << " ";
    }
    First_Vector[0] = 99;
    cout<<endl;
    for (int i = 0; i < Second_Vector.size(); i++) {    /*printing the first vector with the new value*/
        cout << First_Vector[i] << " ";
    }
        cout<<endl;
    for (int i = 0; i < Second_Vector.size(); i++) {    /*printing the second vector to check if we still have same values*/
        cout << Second_Vector[i] << " ";
    }
    return 0;
}