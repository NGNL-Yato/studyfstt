from typing import Dict
def dict_filler(notes: Dict[str, float]) -> None:
    N = int(input("Combien d'étudiants voulez-vous ajouter? "))
    for _ in range(N):
        nom = input("Entrez le nom de l'étudiant: ")
        note = float(input("Entrez la note de l'étudiant: "))
        notes[nom] = note

def Sort(notes):
    sorted_notes = sorted(notes.items(), key=lambda item: item[1])
    for nom, note in sorted_notes:
        print(f"{note} a eu : {nom}")

def dict_splitter(notes: Dict[str, float]) -> None:
    valides = {nom: note for nom, note in notes.items() if note >= 10}
    non_valides = {nom: note for nom, note in notes.items() if note < 10}
    print("Valides:", valides)
    print("Non valides:", non_valides)

def Max (notes) :
    max_note = max(notes, key=notes.get)
    print(f"L'étudiant avec la note maximale est {max_note} avec une note de {notes[max_note]}")
def main():
    Notes = {}
    while True:
        print("\n1. Remplir le dictionnaire avec les noms et les notes des étudiants")
        print("2. Afficher la liste des étudiants avec leurs notes triée par ordre alphabétique")
        print("3. Diviser le dictionnaire en deux sous-dictionnaires (valides, non_valides)")
        print("4. Rechercher l'étudiant ayant la note maximale")
        print("5. Terminer l’exécution du programme")

        choix = int(input("\nChoisissez une option: "))

        match choix:
            case 1:
                dict_filler (Notes)
            case 2:
                Sort(Notes)
            case 3:
                dict_splitter (Notes)
            case 4:
                Max (Notes)
            case 5:
                break
            case _:
                print("Choix non valide. Veuillez choisir une option valide.")

main()