#include<iostream>
#include<string>


class Personne{
    private:
    std::string name;
    std::string family_name;
    int date_naissance;
    public:
    Personne(const std::string& naming,const std::string& secondary_name,int date){
    name=naming;
    family_name=secondary_name;
    date_naissance=date;
    }
    void Afficher(){
        std::cout<<"Prénom : "<<name<<std::endl;
        std::cout<<"Nom : "<<family_name<<std::endl;
        std::cout<<"Date de naissance : "<<date_naissance<<std::endl;
    }
};
class Employe : public Personne{
    private:
    int salary;
    public:
    Employe(int salaire, const std::string& naming, const std::string& secondary_name, int date):Personne(naming,secondary_name,date),salary(salaire){}
    void Afficher(){
        Personne::Afficher();
        std::cout<<"Salaire de l'employé : "<<salary<<std::endl;
    }
};

class Chef :public Employe{
    private:
    std::string service;
    
    public:
    Chef(const std::string& serv,int salaire, const std::string& naming, const std::string& secondary_name, int date):
    Employe(salaire,naming,secondary_name,date),service(serv){}
    void Afficher(){
        Employe::Afficher();
        std::cout<<"Service : "<<service<<std::endl;

    }
};

class Directeur : public Chef{
    private:
    std::string socity;
    
    public:
        Directeur(const std::string& societe,const std::string& serv,int salaire, const std::string& naming, const std::string& secondary_name, int date):
        Chef(serv,salaire,naming,secondary_name,date),socity(societe){}
    void Afficher(){
        Chef::Afficher();
        std::cout<<"Société : "<<socity<<std::endl;
    }

};

int main(){
    Directeur jeanclaud("Google", "IT Department",10000, "JeanClaud","Linus",1965);
    jeanclaud.Afficher();
}