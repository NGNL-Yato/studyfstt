for x in "BON":
    print(x)
texte = "Exemple pour la boucle for"
for x in texte :
    print(x , end ="")
for x in [1, 2, 3, 4] :
    print ("x prend la valeur", x)
for x in [4, 5, 6, 7, 8, 9, 10, 11] :
    print (x, end = " ") # le résultat d’exécution est l’affichage des valeurs 4 5 6 7 8 9 10 11
for y in ["B", 15, 3.6, "Et", 101, "Mois"] :
    print (y, end = " ") # le résultat d’exécution est l’affichage des valeurs B 15 3.6 Et 101 Mois
for j in range(9) :
    print (j, end = " ") # le résultat d’exécution est l’affichage des valeurs 0 1 2 3 4 5 6 7 8
for k in range(1, 9):
    print(k, end=" ")  # le résultat d’exécution est l’affichage des valeurs 1 2 3 4 5 6 7 8
for k in range(1, 10, 3):
    print(k, end=" ")

# Exemple pour la boucle while

x = 1
while x <= 4:
    print("x prend la valeur", x)
    x = x + 1
N = int(input("Entrer un entier : "))
print("Table de multiplication de ", N)
i = 1
while i<=10:
    print(f"{N} x {i} = {N*i} ")
i+=1