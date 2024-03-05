class Stagiaire:
    def __init__(self, num, nom, age, note_1, note_2):
        self.__num = num
        self.__nom = nom
        self.__age = age
        self.__note_1 = note_1
        self.__note_2 = note_2

    def afficher_infos(self):
        print(f"Numéro : {self.__num} Nom : {self.__nom} Age : {self.__age}")
        print(f"Son salaire moyen est :{self.calculer_moyenne()}")

    def calculer_moyenne(self):
        return (self.get_note_1() + self.get_note_2()) / 2

    def get_num(self):
        return self.__num

    def get_nom(self):
        return self.__nom

    def get_age(self):
        return self.__age

    def get_note_1(self):
        return self.__note_1

    def get_note_2(self):
        return self.__note_2

    def set_num(self, num):
        self.__num = num

    def set_nom(self, nom):
        self.__nom = nom

    def set_age(self, age):
        self.__age = age

    def set_note_1(self, note_1):
        self.__note_1 = note_1

    def set_note_2(self, note_2):
        self.__note_2 = note_2


Hamza = Stagiaire(0, "", 0, 0, 0)
Hamza.set_num(1)
Hamza.set_nom("Hamza")
Hamza.set_age(19)
Hamza.set_note_1(15.5)
Hamza.set_note_2(12.3)

Badr = Stagiaire(0, "", 0, 0, 0)
Badr.set_num(2)
Badr.set_nom("Badr")
Badr.set_age(19)
Badr.set_note_1(18)
Badr.set_note_2(10)

Hamza.afficher_infos()
Badr.afficher_infos()

if (Hamza.calculer_moyenne() > Badr.calculer_moyenne()):
    print("Hamza a la plus grande moyenne")
else:
    print("Badr a la plus grande moyenne")