class Stagiaire :
    def __init__(self,num,nom,age,note_1,note_2) :
        self.num = num
        self.nom = nom
        self.age = age
        self.note_1 = note_1
        self.note_2 = note_2
    
    def afficher_infos(self) :
        print (f"Numéro : {self.num} Nom : {self.nom} Age : {self.age}")
        self.calculer_moyenne()

    def calculer_moyenne(self) :
        print (f"Son salaire moyen est :{(self.note_1 + self.note_2) / 2}")

Hamza = Stagiaire(1,"Hamza",19)
Hamza.afficher_infos()