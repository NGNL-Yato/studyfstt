def tester_nombre (choice , nbr) :
    print ("Tester le nombre :", nbr)
    print("Choix :", choice)
    dict = list(nbr)
    match choice :
        case 1 :   
            for i in dict :
                if (i not in "01") :
                    print ("Non Binaire")
                    return True
            print ("Ce nombre est binaire")
        case 2 :
            for i in dict :
                if (i not in range(0,8)) :
                    print ("Non Octal")
                    return True
            print ("Ce nombre est octal")
        case 3 :
            for i in dict :
                if(i not in range(0,10) or i not in 'ABCDEF') :
                    print ("Non Hexadécimal")
                    return True
            print ("Ce nombre est héxadécimal")
        case 4 :
            print ("Ce nombre est décimal"), 
            return True
        

def conversion_to_decimal (nbr, base) :
    print ("Test ")

def conversion_from_decimal (nbr, base) :
    listing,rest = [],0
    while nbr != [0,1] :
        rest = nbr % base
        listing.append (nbr / base)
        nbr = rest + nbr/base
    print (listing)

def menu () :
    print ("Bienvenue ...")
    input_nbr,base_choice  = 0, 0
    while (True) :
        input_nbr = input ("Donnez un nombre :")
        base_choice = int (input (print ('''Menu principal
        - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
        (1) Conversion décimale => binaire
        (2) Conversion décimale => octale
        (3) Conversion décimale => héxadécimale
        (4) Conversion binaire => décimale
        (5) Conversion octale => décimale
        (6) Conversion héxadécimale => décimale
        (7) Quitter''')))
        if (base_choice in [1,2,3]) :
            Boolean_tester = tester_nombre(3, input_nbr)
        elif (base_choice == 4) :
            Boolean_tester = tester_nombre(1, input_nbr)
            print (Boolean_tester)
        elif (base_choice == 5) :
            Boolean_tester = tester_nombre(2, input_nbr)
        elif (base_choice == 6) :
            Boolean_tester = tester_nombre(3, input_nbr)
        elif (base_choice == 7) :
            break
        else :
            print ("Choix invalide, donnez un nouveau nombre ...")
        if Boolean_tester :
            break


    while (True) :
        if (Boolean_tester in [1,2]) :
            match base_choice :
                case 1,2,3 :
                    conversion_from_decimal(input_nbr, base_choice)
                case 4,5,6 :
                    conversion_to_decimal(input_nbr, base_choice)
                case _ :
                    print ("Choix invalide")




menu ()