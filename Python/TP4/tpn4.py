def Fill_Panier(Panier):
    quantity = int(input("How many product do you wanna add ?"))
    i = 0
    while i < quantity:
        code = input("Entrez le code : ")
        if code in Panier:
            print("Product already exists.")
            continue
        nom = input("Entrez le nom : ")
        PU = float(input("Entrez le prix unitaire : "))
        quantity_to_buy = int(input("Entrez la quantité à acheter : "))
        if code and nom and PU and quantity_to_buy:
            Panier[code] = {'nom': nom, 'PU': PU, 'quantity': quantity_to_buy}
            i += 1
            # i is added in this place to confirm that the user added the right product,
            # in case he doesnt add it in the right place, he just give the user to retry
            # from scratch
        if quantity != i :
            input_again = input("Voulez-vous continuer ? (y/n) (yes/no) ")
        if input_again.lower() != "y" or input_again.lower() != "yes" :
            break
        else :
            print ("Prochain produit ...")

def print_bucket(Panier):
    print ("{:<12}{:<12}{:<12}{:<12}".format("Code du produit", "Nom du produit", "Quantité", "Prix Unitaire"))
    # {:<12}.format to force the format to be 12 character
    total = 0
    for code, info in sorted(Panier.items()):
        print ("{:<12}{:<12}{:<12}{:<12}".format(code, info['nom'], str(info['quantity']), str(info['PU'])))
        total += info['quantity'] * info['PU']
    print ("Prix total : ", total)

def prix_total (Panier):
    total = 0
    for code, info in sorted(Panier.items()):
        total += info['quantity'] * info['PU']
    print ("Prix total : ", total)

def modify_product(Panier):
    code = input("Entrez le code du produit à modifier : ")
    if code in Panier:
        print("1. Modifier le nom")
        print("2. Modifier le prix unitaire")
        print("3. Modifier la quantité")
        choice = int(input("Que voulez-vous modifier? "))
        match choice:
            case 1:
                nom = input("Entrez le nouveau nom : ")
                Panier[code]['nom'] = nom
            case 2:
                PU = float(input("Entrez le nouveau prix unitaire : "))
                Panier[code]['PU'] = PU
            case 3:
                quantity = int(input("Entrez la nouvelle quantité : "))
                Panier[code]['quantity'] = quantity
            case _:
                print("Choix non valide.")
    else:
        print("Produit non trouvé.")

def delete_product(Panier):
    code = input("Entrez le code du produit à supprimer : ")
    if code in Panier:
        del Panier[code]
    else:
        print ("Produit non trouvé.")

Panier = {}
print ("Welcome to the store !")
while True:
    option = int(input("Choose an option : \n1-Add new product for the bucket\n2-Display the total bill\n3-Print all the products with total bill\n4-Modify a product\n5-Delete a product\n6-Exit\n"))
    if not Panier and option in [2, 3, 4, 5]:
        # if bucket is still empty block other choices, another way of doing it is to give the input
        # choice one by one to the user or directly give the user the choice to fill the bucket then
        # give him a choice.
        print("The bucket is empty. Please add a product first.")
        continue
    match option:
        case 1:
            Fill_Panier(Panier)
        case 2:
            prix_total(Panier)
        case 3:
            print_bucket(Panier)
        case 4:
            modify_product(Panier)
        case 5:
            delete_product(Panier)
        case 6:
            print("Thank you for your visit, see you later")
            break
        case _:
            print("Input Error, try again")
