from abc import ABC, abstractmethod
class Forme :
    @abstractmethod
    def __init__ (self) :
        pass
    @abstractmethod
    def calculerSurface (self) :
        pass
    @abstractmethod
    def display (self) :
        pass

class Rectangle (Forme) :
    def __init__ (self, longueur, largeur) :
        self.longueur = longueur
        self.largeur = largeur
    def calculerSurface(self):
        return self.longueur * self.largeur
    def display(self):
        print("Rectangle : longueur = ", self.longueur, ", largeur = ", self.largeur, ", surface = ", self.calculerSurface())

class Triangle (Forme) :
    def __init__(self, base, hauteur):
        self.base = base
        self.hauteur = hauteur
    def calculerSurface(self):
        return self.base * self.hauteur / 2
    def display(self):
        print("Triangle : base = ", self.base, ", hauteur = ", self.hauteur, ", surface = ", self.calculerSurface())
    
class Disque (Forme) :
    def __init__(self, rayon):
        self.rayon = rayon

    def calculerSurface(self):
        return 3.14 * self.rayon * self.rayon
    def display(self):
        print("Disque : rayon = ", self.rayon, ", surface = ", self.calculerSurface())
    
def menu ():
    print("1. Rectangle")
    print("2. Triangle")
    print("3. Disque")
    print("4. Quitter")
    choix = int(input("Votre choix : "))
    return choix

if __name__ == "__main__":
    while True:
        choix = menu()
        match choix :
            case 1:
                longueur = int(input("Longueur : "))
                largeur = int(input("Largeur : "))
                r = Rectangle(longueur, largeur)
                r.display()
            case 2:
                base = int(input("Base : "))
                hauteur = int(input("Hauteur : "))
                t = Triangle(base, hauteur)
                t.display()
            case 3:
                rayon = int(input("Rayon : "))
                d = Disque(rayon)
                d.display()
            case 4:
                break
            case _:
                print("Choix invalide")
                continue
       