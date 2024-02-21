def Fill_Panier(Panier):
    quantity = int(input("How many product do you wanna add ?"))
    i = 0
    while i < quantity:
        code = input("Entrez le code : ")
        if any(product['code'] == code for product in Panier):
            print("Product already exists.")
            continue
        nom = input("Entrez le nom : ")
        PU = float(input("Entrez le prix unitaire : "))
        quantity_to_buy = int(input("Entrez la quantité à acheter : "))
        if code and nom and PU and quantity_to_buy:
            Panier.append({'code': code, 'nom': nom, 'PU': PU, 'quantity': quantity_to_buy})
            i += 1
        if quantity != i :
            input_again = input("Voulez-vous continuer ? (y/n) (yes/no) ")
        if input_again.lower() != "y" or input_again.lower() != "yes" :
            break
        else :
            print ("Prochain produit ...")

def print_bucket(Panier):
    print ("{:<12}{:<12}{:<12}{:<12}".format("Code du produit", "Nom du produit", "Quantité", "Prix Unitaire"))
    total = 0
    for product in sorted(Panier, key=lambda x: x['code']):
        print ("{:<12}{:<12}{:<12}{:<12}".format(product['code'], product['nom'], str(product['quantity']), str(product['PU'])))
        total += product['quantity'] * product['PU']
    print ("Prix total : ", total)

def prix_total (Panier):
    total = 0
    for product in Panier:
        total += product['quantity'] * product['PU']
    print ("Prix total : ", total)

def modify_product(Panier):
    code = input("Entrez le code du produit à modifier : ")
    for product in Panier:
        if product['code'] == code:
            print("1. Modifier le nom")
            print("2. Modifier le prix unitaire")
            print("3. Modifier la quantité")
            choice = int(input("Que voulez-vous modifier? "))
            if choice == 1:
                nom = input("Entrez le nouveau nom : ")
                product['nom'] = nom
            elif choice == 2:
                PU = float(input("Entrez le nouveau prix unitaire : "))
                product['PU'] = PU
            elif choice == 3:
                quantity = int(input("Entrez la nouvelle quantité : "))
                product['quantity'] = quantity
            else:
                print("Choix non valide.")
            break
    else:
        print("Produit non trouvé.")

def delete_product(Panier):
    code = input("Entrez le code du produit à supprimer : ")
    for product in Panier:
        if product['code'] == code:
            Panier.remove(product)
            break
    else:
        print ("Produit non trouvé.")

Panier = []
print ("Welcome to the store !")
while True:
    option = int(input("Choose an option : \n1-Add new product for the bucket\n2-Display the total bill\n3-Print all the products with total bill\n4-Modify a product\n5-Delete a product\n6-Exit\n"))
    if not Panier and option in [2, 3, 4, 5]:
        print("The bucket is empty. Please add a product first.")
        continue
    if option == 1:
        Fill_Panier(Panier)
    elif option == 2:
        prix_total(Panier)
    elif option == 3:
        print_bucket(Panier)
    elif option == 4:
        modify_product(Panier)
    elif option == 5:
        delete_product(Panier)
    elif option == 6:
        print("Thank you for your visit, see you later")
        break
    else:
        print("Input Error, try again")