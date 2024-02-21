def main():
    notes = []
    while True:
        print("\n1. Ajouter une note")
        if (notes) :
            print("2. Afficher la liste des notes des étudiants")
            print("3. Inverser la liste des notes des étudiants")
            print("4. Rechercher une note")
            print("5. Afficher la note maximale")
            print("6. Afficher la note minimale")
            print("7. Afficher la note moyenne du groupe")
            print("8. Trier la liste des notes d’une manière décroissante")
            print("9. Supprimer une note")
            print("10. Supprimer toutes les notes")
            print("11. Terminer l’exécution du programme")
        else :
            print ("La liste est vide.")
        choix = int(input("\nChoisissez une option: "))

        match choix:
            case 1:
                note = float(input("Entrez la note à ajouter: "))
                if (note <= 0 or note >= 20) :
                    notes.append(note)
                else :
                    print ("Entrez une note entre 0 et 20")
            case 2:
                print(notes)
            case 3:
                notes.reverse()
            case 4:
                note = float(input("Entrez la note à rechercher: "))
                if note in notes:
                    print("La note est dans la liste.")
                else:
                    print("La note n'est pas dans la liste.")
            case 5:
                print(max(notes))
            case 6:
                print(min(notes))
            case 7:
                print(sum(notes) / len(notes))
            case 8:
                notes.sort(reverse=True)
            case 9:
                note = float(input("Entrez la note à supprimer: "))
                if note in notes:
                    notes.remove(note)
                else:
                    print("La note n'est pas dans la liste.")
            case 10:
                notes.clear()
            case 11:
                break
            case _:
                print("Choix non valide. Veuillez choisir une option valide.")

main()