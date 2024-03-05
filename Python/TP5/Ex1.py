class Stagiaire :
    def __init__(self,num,nom,age,note_1,note_2) :
        self.num = num
        self.nom = nom
        self.age = age
        self.note_1 = note_1
        self.note_2 = note_2
    
    def afficher_infos(self) :
        print (f"Numéro : {self.num} Nom : {self.nom} Age : {self.age}")
        print (f"Son salaire moyen est :{self.calculer_moyenne()}")
        

    def calculer_moyenne(self) :
        return (self.note_1 + self.note_2) / 2


Hamza = Stagiaire(1,"Hamza",19,15.5,12.3)
Badr = Stagiaire(2,"Badr",19,18,10)
Hamza.afficher_infos()
Badr.afficher_infos()

if (Hamza.calculer_moyenne() > Badr.calculer_moyenne()) :
    print ("Hamza a la plus grande moyenne")
else :
    print ("Badr a la plus grande moyenne")
