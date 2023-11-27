#include<iostream>
#include<list>
#include<iterator>

using namespace std;

void showlist(list<int> g){
    list<int>::iterator it;
    for(it = g.begin();it!=g.end();++it)
    cout<<'\t'<<*it;
    cout<<'\n';
}
void TriBull(list<int>& Input){     /*https://fr.wikipedia.org/wiki/Tri_%C3%A0_bulles fonctionnement tri bulle*/
    bool Checking=false;
    do{
        Checking=0;
        for(list<int>::iterator Actual=Input.begin();Actual!=Input.end();++Actual){ /*Actual!=Input.end() Donne une qui commence par les elements les plus grands aux plus petits*/
            if (*next(Actual)>*Actual){
                swap(*next(Actual),*Actual);
                Checking = true;
            }
        }
    }while( Checking );
}

void triInsertion(list<int>& Input){       /*https://fr.wikipedia.org/wiki/Tri_par_insertion algorithmic explanation of insertion*/
    for(list<int>::iterator Actual=next(Input.begin());Actual!=Input.end();++Actual){
        int here = *Actual;
        list<int>::iterator before = Actual;
        while(before != Input.begin() && *prev(before) > here){
            *before = *prev(before);
            --before;
        };
    *before = here;
    };
}

void triSelection(list<int>& Input){  /*https://fr.wikipedia.org/wiki/Tri_par_s%C3%A9lection*/
    for(list<int>::iterator Actual=Input.begin();Actual!=Input.end();Actual++){
        list<int>::iterator  min_value = Actual;
        for(list<int>::iterator next_value = next(Actual);next_value!=Input.end();next_value++ ){
            if(*next_value < *min_value)
            min_value=next_value;
        }
        swap(*min_value,*Actual);
    }
}

int main(){
    int num,choice;
    list<int> Input; 
    cout << "Enter numbers: ";
    //insert number into list from cin
    while (num != -1) { // enter -1 to end the list
        cin>>num;
        Input.push_back(num);
    };

    cout << "Choisissez un algorithme de tri : " << endl;
    cout << "1. Tri à bulles" << endl;
    cout << "2. Tri par sélection" << endl;
    cout << "3. Tri par insertion" << endl;
    cin >> choice;
    switch (choice) {
        case 1:TriBull(Input);break;;
        case 2:triSelection(Input);break;;
        case 3:triInsertion(Input);break;;
        default:cout<<"Non Valid"<<endl;
    }

    // Affichage de la liste triée
    cout << "Input triée : ";
    showlist(Input);

    return 0;
}


