#include<iostream>

class Element{
    public:
        int nombre;             /* all attributes need to be public to create a new liste*/
        Element *next_element;
        Element(int&nombre_){   /*storing elements*/
            nombre=nombre_;
            next_element=nullptr;
        }
};

class liste {
    private:
        Element* first_element;
    public:
    liste() : first_element(nullptr) {}
    void ajouter(int new_elem){
        Element* new_element = new Element (new_elem);  /*adding new element*/
        new_element->next_element=first_element;    /*first_element was empty in the start, now the new element will point to the nullptr */
        first_element=new_element;                  /*to let the first_element get the new value and be pointed at as the first value*/
    }
    void supprimer(){
        if(first_element != NULL){              /*checks if the list isnt empty*/
            Element* Del_element = first_element;       /*pointer to delet the first element*/
            first_element=first_element->next_element;  /*moving the ptr from first element to make the second element become the first*/
            delete Del_element;            /*free the memory*/
        }
    }
    void afficher(){                /*displaying element by element while moving the pointer for the first element to second*/
        Element* Tracking_elem= first_element;
        std::cout<<"La liste est composé de : ";
        while (Tracking_elem != nullptr){   /* stops at the last element*/
            std::cout<<Tracking_elem->nombre<<" . ";
            Tracking_elem=Tracking_elem->next_element;
        }
        std::cout<<std::endl;
        delete Tracking_elem;
    }
    ~liste(){               /*destructor*/
        while(first_element != nullptr){
            Element* track=first_element;
            first_element=first_element->next_element;
            delete track;
        }
    }
};
int main() {
    liste maListe;
    maListe.ajouter(1);             /*adding new element*/
    maListe.ajouter(2);         
    maListe.afficher();             /*displaying the list*/
    maListe.supprimer();            /*deleting first element*/
    maListe.afficher();             /*displaying new list to verify if the element wa deleting*/

    return 0;
}