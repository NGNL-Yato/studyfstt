class Livre :
    def __init__ (self, ISBN, titre, nom_auteur,date_publication, prix, maison_edition) :
        self._ISBN = ISBN
        self._titre = titre
        self._nom_auteur = nom_auteur
        self._date_publication = date_publication
        self._prix = prix
        self._maison_edition = maison_edition
    
    def ComparerLivres (self, livre) :
        if self._ISBN == livre._ISBN :
            return True
        else :
            return False
    
    def ComparerLivrestitre (self, titre) :
        if self._titre == titre :
            return True
        else :
            return False
    
    def getISBN (self) :
        return self._ISBN
    
    def AfficherInfos (self) :
        if ( len(self._nom_auteur) > 1) :
            print (f"ISBN : {self._ISBN}, Titre : {self._titre}, Auteur :")
            for nom in self._nom_auteur :
                print (f"{nom}")
            print(f"Date de publication : {self._date_publication}, Prix : {self._prix}, Maison d'édition : {self._maison_edition}")  
        else :
            print (f"ISBN : {self._ISBN}, Titre : {self._titre}, Auteur : {self._nom_auteur[0]}, Date de publication : {self._date_publication}, Prix : {self._prix}, Maison d'édition : {self._maison_edition}")

    def AppliquerPromotion(self,reduction) : 
        self._prix = self._prix - (self._prix * reduction / 100)
        print(f"Le prix du livre {self._titre} a été réduit de {reduction} %")

    def getAuteur(self) :
        return self._nom_auteur


def menu () :
    choice = int (input ('''Menu général :
    ———————————————————————————————————————————————————————————
    (1) Ajouter des livres
    (2) Afficher les informations de tous les livres
    (3) Rechercher un livre par son ISBN
    (4) Afficher la liste de tous les livres d’un auteur donné
    (5) Appliquer une remise de prix pour un livre donné
    (6) Quitter le programme'''))
    return choice

def AjouterLivre (livre_librairie) :
    ISBN = input ("Entrez l'ISBN du livre : ")
    titre = input ("Entrez le titre du livre : ")
    nom_auteur = []
    while True :
        auteur_nbr = int (input ("Entrez le nombre d'auteurs du livre : "))
        for i in range (0,auteur_nbr) :
            nom_auteur.append(input ("Entrez le nom de l'auteur du livre : "))
        break
    date_publication = input ("Entrez la date de publication du livre : ")
    prix = float (input ("Entrez le prix du livre : "))
    maison_edition = input ("Entrez la maison d'édition du livre : ")
    livre = Livre (ISBN, titre, nom_auteur, date_publication, prix, maison_edition)
    livre_librairie.append (livre)

def AjouterdesLivres (livre_librairie) :
    livre_number = int (input ("Entrez le nombre de livres à ajouter : "))
    for i in range (0,livre_number) :
        AjouterLivre(livre_librairie)
        choice = int (input ("Voulez-vous ajouter un autre livre ? (1) Oui (2) Non"))
        if choice == 2 :
            break
def AfficherLivreAuteur (auteur, livre_librairie) :
    for livre in livre_librairie :
        if auteur in livre.getAuteur() :
            livre.AfficherInfos()

def Affichertousleslivres (livre_librairie) :
    for livre in livre_librairie :
        livre.AfficherInfos()

def RechercherLivreISBN (ISBN, livre_librairie) :
    counter = 0
    for livre in livre_librairie :
        if livre.ComparerLivres(ISBN) == True :
            livre.AfficherInfos()
            counter += 1
    if counter == 0 :
        print ("Ce livre n'existe pas")
        

def AppliquerRemiseparISBN (ISBN, livre_librairie) :
    for livre in livre_librairie :
        if livre.CompareLivre(ISBN) == True :
            reduction = float (input ("Entrez le pourcentage de réduction : "))
            livre.AppliquerPromotion(reduction)
        else :
            print ("Ce livre n'existe pas")

def AppliquerRemisepartitre(titre, livre_librairie) :
    for livre in livre_librairie :
        if livre.ComparerLivrestitre() == True :
            reduction = float (input ("Entrez le pourcentage de réduction : "))
            livre.AppliquerPromotion(reduction)

def AppliquerRemise (livre_librairie) :
    choice = int (input ("Voulez-vous appliquer une remise (1) par ISBN  \n(2) par titre ?"))
    match choice :
        case 1 : 
            ISBN = input ("Entrez l'ISBN du livre : ")
            AppliquerRemiseparISBN(ISBN, livre_librairie)
        case 2 : 
            titre = input ("Entrez le titre du livre : ")
            AppliquerRemisepartitre(titre, livre_librairie)
def main () :
    livre_librairie = []
    while True :
        choice = menu()
        match choice :
            case 1 : 
                AjouterdesLivres(livre_librairie)
            case 2 : 
                Affichertousleslivres(livre_librairie)
            case 3 :
                ISBN = input ("Entrez l'ISBN du livre : ")
                RechercherLivreISBN(ISBN, livre_librairie)
            case 4 :
                auteur = input ("Entrez le nom de l'auteur : ")
                AfficherLivreAuteur(auteur, livre_librairie)
            case 5 :
                AppliquerRemise(livre_librairie)
            case 6 :
                break
            case _ :
                print ("Choix invalide")


main()
