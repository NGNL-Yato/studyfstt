#include<iostream>
#include"Exercice 15.h"
#include<cstdlib>


int main() {
    srand(static_cast<unsigned int>(time(nullptr)));    //utilise dans main pour que la valeur random ne soit pas redondante
    Fichier* monFichier = new Fichier(10);  // Crée un objet Fichier avec une longueur de 10 octets
    monFichier->Creation();  // L'espace est déjà alloué dans le constructeur, cette méthode est vide ici
    monFichier->Remplit();  // Remplit l'espace mémoire avec des données
    monFichier->Affiche();  // Affiche les données
    delete monFichier;  // Supprime l'objet et libère l'espace mémoire grâce au destructeur
    return 0;
}