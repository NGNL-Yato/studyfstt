#ifndef EXERCICE_15_H
#define EXERCICE_15_H

class Fichier{
    private:
        int longueur;
        char* ptr_longueur;
        int count;
    public:
    Fichier(int size);
    void Creation(); /*Constructeur fait la meme chose donc pas besoin de rajouter quelque chose*/
    void Remplit();
    void Affiche();
    ~Fichier();
};

#endif