#Calculatrice
def somme (a,b) : 
    return a+b

def soustraction (a,b) : 
    return a-b

def multiplication (a,b) : 
    return a*b
def division (a,b) : 
    return a/b 
def puissance (a,b) :
    return a**b
def racine (a) :
    return a**0.5
def carre (a) :
    return a**2
def cube (a) :  
    return a**3
def valeurabsolue (a) :
    if a < 0 :
        return -a
    else :
        return a
def pgcd (a,b) :
    if a == 0 or b == 0:
        return 0
    else :
        while b != 0:
            a, b = b, a % b
        return a
def factorielle (a) :
    fact = 1
    fact = int (fact)
    while a > 0:
        fact = fact * a
        a -= 1
    return fact

print("Bienvenue dans la calculatrice \n")
breakingvariable = True 
while breakingvariable : 
    A = ( input("Entrez le premier nombre : "))
    B = ( input("Entrez le deuxième nombre : "))
    while True : 
        operation =int(input("Choisissez une opération: \n1-Addition \n2-Soustraction \n3-Multiplication \n4-Division \n5-Puissance \n6-Racine carrée \n7-Carré \n8-Cube \n9-Valeur absolue \n10-PGCD \n11-Factorielle \n0-Nouveaux nombres\n"))
        match operation : 
            case 1 : 
                print(f"La somme de {A} et {B} est {somme(A,B)}")
            case 2 :
                print(f"La différence de {A} et {B} est {soustraction(A,B)}")
            case 3 :
                print(f"Le produit de {A} et {B} est {multiplication(A,B)}")
            case 4 :
                print(f"Le quotient de {A} et {B} est {division(A,B)}")
            case 5 :
                print(f"{A} à la puissance {B} est {puissance(A,B)}")
            case 6 :
                print(f"La racine carrée de {A} est {racine(A)}")
                print(f"La racine carrée de {B} est {racine(B)}")
            case 7 :
                print(f"Le carré de {A} est {carre(A)}")
                print(f"Le carré de {B} est {carre(B)}")
            case 8 :
                print(f"Le cube de {A} est {cube(A)}")
                print(f"Le cube de {B} est {cube(B)}")
            case 9 :
                print(f"La valeur absolue de {A} est {valeurabsolue(A)}")
                print(f"La valeur absolue de {B} est {valeurabsolue(B)}")
            case 10 :
                print(f"Le PGCD de {A} et {B} est {pgcd(int(A),int(B))}")
            case 11 :
                print(f"La factorielle de {A} est {factorielle(int(A))}")
                print(f"La factorielle de {B} est {factorielle(int(B))}")
            case 0 :
                break
            case _ :
                print("Opération invalide")
                continue
    new_op = input("Voulez-vous effectuer une nouvelle opération ? (O/N) ")
    if new_op == "O" or new_op == "o" : 
        breakingvariable = True
    else : 
        breakingvariable = False
            


    
