# définition des données C’est un commentaire
op1=14 # Création d’une variable identifiée par op1 de type int
print(op1)
op2=5.5 # Création d’une variable identifiée par op2 de type float
print(op2)
op3=3 # Création d’une variable identifiée par op3 de type int
print(op3)
# opérateurs arithmétiques
op1+op2 # Afficher la valeur de la somme de op1 et op2, out : 19.5
print(op1+op2)
op1-op2 # Afficher la valeur de la différence de op1 et op2, out : 8.5
print(op1-op2)
op1*op2 # Afficher la valeur du produit de op1 et op2, out : 77.0
print(op1*op2)
op1**op3 # Afficher la valeur de op1 à la puissance de op3, out : 2744
print(op1**op3)
op1/op3 # Afficher la valeur du quotient de op1 sur op2, out : 4.666666666666667
print(op1/op3)
op1//op3 # Afficher la partie entière du quotient de op1 sur op2, out : 4
print(op1//op3)
op1%op3 # Afficher le reste de la division euclidienne de op1 par op3, out : 2
print(op1%op3)
# opérateurs d’assignation
op1+=op3 # équivalent à op1=op1+op3, la valeur de op1 devient 17
print(op1)
op2*=op3 # équivalent à op2=op2*op3, la valeur de op2 devient 16,5
print(op2)
op1%=op3 # équivalent à op1=op1%op3, la valeur de op1 devient 2
print(op1)
# affectations multiples
x=y=z=1.4 # Création de trois variables identifiées successivement par x, y et z de type
print(x,y,z)
x, y, z=2, 20, 19 # Création de trois variables identifiées successivement par x, y et z de type int
print(x,y,z)
b = -x**2+y/5*2-z//3
print(b)
# opérateurs de conversion C’est un commentaire
x="4" # Création d’une variable identifiée par x de type str
print(x)
type(x) # Afficher le type de la variable x , out : str
print(type(x))
x=int(x) # Convertir le type de la variable x vers le type int
print(type(x))
type(x) # Afficher le nouveau type de la variable x , out : int
x=float(x) # Convertir le type de la variable x vers le type float
print(type(x))
type(x) # Afficher le nouveau type de la variable x , out : float
# opérateurs logiques c’est un commentaire
A, B=10, 5 # Création de deux variables identifiées successivement par A et B de type int
print(A,B)
# expressions logiques simples
A+4<B*2 # Afficher le résultat du test , out : False
print(A+4<B*2)
A%B == 0 # Afficher le résultat du test , out : True
print(A%B == 0)
A//B != 0 # Afficher le résultat du test , out : True
print(A//B != 0)
# expressions logiques complexes
A+4<B*2 and A%B == 0 # Afficher le résultat du test , out : False
print(A+4<B*2 and A%B == 0)
A<B*2 or A//B != 0 # Afficher le résultat du test , out : True
print(A<B*2 or A//B != 0)