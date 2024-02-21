# la structure conditionnelle simple
x=int(input("Choisir une valeur aléatoire ")) # on demande à l’utilisateur de saisir une valeur de type int, cette valeur sera
if x>0 :
    print(" la valeur saisie est positive") # le texte « la valeur saisie est positive » sera affiché si l’utilisateur entre une
# la structure conditionnelle complète
y=int(input("Choisir un nombre aléatoire ")) # on demande à l’utilisateur de saisir une valeur de type int, cette valeur sera
if y%2==0 :
    print(" le nombre choisi est pair ") # le texte « le nombre choisi est pair » sera affiché si l’utilisateur saisit un
else :
    print(" le nombre choisi est impair ") # le texte « le nombre choisi est impair» sera affiché si l’utilisateur saisit un
# la structure conditionnelle imbriquée
Note=float(input("Choisir une note ")) # on demande à l’utilisateur de saisir une valeur de type float, cette valeur sera
if Note>=10 :
    print(" Module validé ") # le texte « Module validé » sera affiché si l’utilisateur entre une valeur
elif Note >=5 :
    print(" Vous avez un rattrapage !! ") # le texte « Vous avez un rattrapage !! » sera affiché si l’utilisateur entre une
else :
    print(" Module non validé ")