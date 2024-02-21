#Calculatrice

print("Bienvenue dans la calculatrice \n")
breakingvariable = True 
while breakingvariable : 
    A = ( input("Entrez le premier nombre : "))
    B = ( input("Entrez le deuxième nombre : "))
    while True : 
        operation =int(input("Choisissez une opération: \n1-Addition \n2-Soustraction \n3-Multiplication \n4-Division \n5-Puissance \n6-Racine carrée \n7-Carré \n8-Cube \n9-Valeur absolue \n10-PGCD \n11-Factorielle \n0-Nouveaux nombres\n"))
        match operation : 
            case 1 : 
                print(f"La somme de {A} et {B} est {A+B}")
            case 2 :
                print(f"La différence de {A} et {B} est {A-B}")
            case 3 :
                print(f"Le produit de {A} et {B} est {A*B}")
            case 4 :
                print(f"Le quotient de {A} et {B} est {A/B}")
            case 5 :
                print(f"{A} à la puissance {B} est {A**B}")
            case 6 :
                print(f"La racine carrée de {A} est {A**0.5}")
                print(f"La racine carrée de {B} est {B**0.5}")
            case 7 :
                print(f"Le carré de {A} est {A**2}")
                print(f"Le carré de {B} est {B**2}")
            case 8 :
                print(f"Le cube de {A} est {A**3}")
                print(f"Le cube de {B} est {B**3}")
            case 9 :
                if A < 0 :
                    print(f"La valeur absolue de {A} est {-A}")
                else :
                    print(f"La valeur absolue de {A} est {A}")
                if B < 0 :
                    print(f"La valeur absolue de {B} est {-B}")
                else :
                    print(f"La valeur absolue de {B} est {B}")
            case 10 :
                if A == 0 or B == 0:
                    print(f"Le PGCD de {A} et {B} est 0")
                else :
                    a = int(A)
                    b = int(B)
                    while b != 0:
                        a, b = b, a % b
                    pgcd = a
                    print(f"Le PGCD de {A} et {B} est {pgcd}")
            case 11 :
                fact = 1
                fact = int (fact)
                print(f"La factorielle de {A} est ")
                A= int (A)
                while A > 0:
                    fact = fact * A
                    A -= 1
                print(fact)
                fact = 1
                fact = int (fact)
                print(f"La factorielle de {B} est ")
                B = int (B)
                while B > 0:
                    fact = fact * B
                    B -= 1
                print(fact)
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